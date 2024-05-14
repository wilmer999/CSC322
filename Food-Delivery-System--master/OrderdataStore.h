#ifndef ORDERDATASTORE_H
#define ORDERDATASTORE_H

#endif // ORDERDATASTORE_H
#include <QObject> // Include QObject for signals and slots

class OrderDataStore : public QObject {
    Q_OBJECT

public:
    static OrderDataStore& getInstance() {
        static OrderDataStore instance;
        return instance;
    }

    // Function to set the total price of the order
    void setTotalPrice(double price) {
        totalPrice = price;
        emit totalPriceChanged(totalPrice); // Emit a signal indicating that the total price has changed
    }

    // Function to get the total price of the order
    double getTotalPrice() const {
        return totalPrice;
    }

signals:
    // Signal emitted when the total price changes
    void totalPriceChanged(double newTotalPrice);

private:
    OrderDataStore() {} // Private constructor to enforce singleton
    OrderDataStore(const OrderDataStore&) = delete; // Disallow copy construction
    OrderDataStore& operator=(const OrderDataStore&) = delete; // Disallow assignment
    ~OrderDataStore() {} // Destructor

    double totalPrice = 0.0; // Member variable to store the total price of the order
};
