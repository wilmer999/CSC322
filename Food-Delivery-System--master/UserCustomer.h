#ifndef USERCUSTOMER_H
#define USERCUSTOMER_H
#include <QString>


class Coustomer {
private:
    QString  Username;
    QString  Password;
    QString  Address;
    int      Phone;
    QString  Email;

    //Temp
    QString  TUsername;
    QString  TPassword;
    QString  TAddress;
    int      TPhone;
    QString  TEmail;

public:
    // constructors
    Coustomer();

    // destructor
    ~Coustomer();

    //get Methods
    QString  getUsername()     const;
    QString  getPassword()     const;
    QString  getAddress()      const;
    int      getPhone()        const;
    QString  getEmail()        const;

    //Set methods
    void setUsername    (QString);
    void setPassword    (QString);
    void setAddress     (QString);
    void setPhone       (int);
    void setEmail       (QString);

};






#endif // USERCUSTOMER_H
