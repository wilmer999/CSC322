CREATE DATABASE DeliSys
GO

USE DeliSys
GO


CREATE TABLE Customer(
	CustomerID INT PRIMARY KEY IDENTITY(1,1),
	Username NVARCHAR(50) NOT NULL,
	Password NVARCHAR(128) NOT NULL CHECK (LEN(Password) > 8), 
	Address VARCHAR(256) NOT NULL,
	Phone VARCHAR(10) UNIQUE NOT NULL CHECK (LEN(Phone) = 10 AND Phone NOT LIKE '%[^0-9]%'),
	Email VARCHAR(128) CHECK (Email LIKE '%@%'),
	VIP CHAR(5) NOT NULL CHECK (VIP = 'Yes' OR VIP = 'No'),
);

CREATE TABLE Employee(
	EmployeeID INT PRIMARY KEY IDENTITY(1,1),
	Username NVARCHAR(50) UNIQUE NOT NULL,
	Position NVARCHAR(50) NOT NULL CHECK (Position = 'Admin' OR 
								Position = 'Chef' OR 
								Position = 'Supplier' OR
								Position = 'Delivery'),
	Password NVARCHAR(128) NOT NULL CHECK (LEN(Password) > 8), 
	Address VARCHAR(256), 
	Phone VARCHAR(10) UNIQUE NOT NULL CHECK (LEN(Phone) = 10 AND Phone NOT LIKE '%[^0-9]%'),
	Email VARCHAR(128) CHECK (Email LIKE '%@%'),
	Salary DECIMAL(5,2)
);

SELECT EmployeeID AS AdminID, Username, Position, Email
INTO Admin
FROM Employee
WHERE Position = 'Admin';

	
SELECT EmployeeID AS ChefID, Username, Position, Email
INTO Chef
FROM Employee
WHERE Position = 'Chef';

SELECT EmployeeID AS DeliveryID, Username, Position, Email
INTO Delivery
FROM Employee
WHERE Position = 'Delivery';

SELECT EmployeeID AS SupplierID, Username, Position, Email
INTO Supplier
FROM Employee
WHERE Position = 'Supplier';
	

----------------------------------------------------------------------------

CREATE TABLE MenuElements(
	MenuID INT PRIMARY KEY IDENTITY(1,1),
	MenuNumber INT UNIQUE NOT NULL,
	MenuName NVARCHAR(50) UNIQUE NOT NULL,
	Price DECIMAL(5, 2) NOT NULL
);

CREATE TABLE OrderItems(
	ItemID INT PRIMARY KEY IDENTITY(1,1),
	Itemname NVARCHAR(50) UNIQUE NOT NULL,
);

CREATE TABLE MenuItems (
	MenuItemsID INT NOT NULL UNIQUE REFERENCES MenuElements(MenuID),
	Item1 INT NOT NULL REFERENCES OrderItems(ItemID),
	Item2 INT REFERENCES OrderItems(ItemID),
	Item3 INT REFERENCES OrderItems(ItemID),
	Item4 INT REFERENCES OrderItems(ItemID),
	Item5 INT REFERENCES OrderItems(ItemID)
);

CREATE TABLE ReviewElements(
	ReviewID INT PRIMARY KEY IDENTITY(1,1),
	ReviewerID INT REFERENCES Customer(CustomerID) NOT NULL,
	MenuID INT REFERENCES MenuElements(MenuID) NOT NULL, 
	ReviewStars INT NOT NULL CHECK (ReviewStars >= 0 AND ReviewStars <= 5)
);

SELECT ReviewID, Customer.CustomerID, Username, VIP, MenuID, ReviewStars
INTO Review
FROM  Customer, ReviewElements
WHERE ReviewerID = CustomerID;


SELECT MenuID, AVG(ReviewStars) AS ReviewTotal
INTO MenuReview
FROM ReviewElements
GROUP BY MenuID;


SELECT MenuElements.MenuID, MenuNumber, MenuName, (SELECT Itemname FROM OrderItems, MenuItems WHERE ItemID = Item1) AS Item1, 
										(SELECT Itemname FROM OrderItems, MenuItems WHERE ItemID = Item2) AS Item2, 
										(SELECT Itemname FROM OrderItems, MenuItems WHERE ItemID = Item3) AS Item3,
										(SELECT Itemname FROM OrderItems, MenuItems WHERE ItemID = Item4) AS Item4, 
										(SELECT Itemname FROM OrderItems, MenuItems WHERE ItemID = Item5) AS Item5,
																											Price,
																											ReviewTotal
INTO Menu
FROM MenuElements, MenuItems, MenuReview
WHERE MenuElements.MenuID = MenuItemsID;

CREATE TABLE OrderElements(
	OrderID INT PRIMARY KEY IDENTITY(1,1),
	CustomerID INT UNIQUE NOT NULL REFERENCES Customer(CustomerID),
	Username NVARCHAR(50) NOT NULL REFERENCES Customer(Username),
	MenuID INT NOT NULL REFERENCES MenuElements(MenuID),
	MenuNum INT NOT NULL REFERENCES MenuElements(MenuNumber)
);

SELECT OrderID, OrderElements.CustomerID, OrderElements.Username, OrderElements.MenuID, MenuNum, Price 
INTO Orders
FROM OrderElements, MenuElements, Customer;

SELECT OrderID, CustomerID, Username, SUM(Price) AS TotalPrice 
INTO OrderTotal
FROM Orders
GROUP BY OrderID, CustomerID, Username;

-------------------------------------------------

INSERT INTO dbo.Customer(Username, Password, Address, VIP, Phone, Email)
	VALUES
	('SomeDude', 'Somedude123', '123 street, apt 8K', 'Yes', 3333333333, 'Something@hotmail.com');

INSERT INTO dbo.A(Username, Password, Address, VIP, Phone, Email)


SELECT *
FROM Customer



	


