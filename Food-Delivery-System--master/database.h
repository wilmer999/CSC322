#ifndef DATABASE_H
#define DATABASE_H

#include <QString>
#include <QString>


class DatabaseLink {
public:
    static QString databaseName() { return "your_database_name.db"; }
    static QString connectionName() { return "your_connection_name"; }
    // Add more connection settings as needed
};


#endif // DATABASE_H
