#ifndef USERS_H
#define USERS_H

#include <string>

class Employee {
    public:
        // constructors
        Employee();

        // destructor
        ~Employee();

        // get methods
        string  Employee_ID() const;  // Cannont be changed
        string  UserName()    const;
        string  Position()    const;
        string  Email()       const;
        int  Phone()       const;

        // set methods
        void UserName (string);
        void Position (string);
        void Email    (string);
        void Phone    (int);

    private:
        string PassW;
        int salary;

};


class Admin {
    public:
        // constructors
        Admin();

        // destructor
        ~Admin();

        string  UserName()    const;
        string  Employee_ID() const;

    private:
};

class Supplyer {
    public:
        // constructors
        Supplyer();

        // destructor
        ~Supplyer();

        
        string  Employee_ID();

    private:

};


class Chef {
    public:
        // constructors
        Chef();

        // destructor
        ~Chef();
        string  Employee_ID();

    private:

};

class Deliv {
    public:
        // constructors
        Deliv();

        // destructor
        ~Deliv();
        string  Employee_ID();


    private:

};

class Coustomer {
    public:
        // constructors
        Coustomer();

        // destructor
        ~Coustomer();

        string  Coustomer_ID();

    private:

};

