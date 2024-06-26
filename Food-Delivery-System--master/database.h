#ifndef DATABASE_H
#define DATABASE_H

#include <QString>
#include <QApplication>


class DatabaseLink {
public:
    static DatabaseLink& instance() {
        static DatabaseLink instance; // Static instance of the class
        return instance;
    }

    QString databaseName() const { return m_databaseName; }
    QString connectionName() const { return m_connectionName; }
    // Add more connection settings as needed

    void setDatabaseName(const QString& name) { m_databaseName = name; }
    void setConnectionName(const QString& name) { m_connectionName = name; }

private:
    DatabaseLink() { // Private constructor to prevent instantiation
        // Initialize default connection settings
        m_databaseName = "your_database_name.db";
        m_connectionName = "your_connection_name";
    }

    QString m_databaseName;
    QString m_connectionName;
    // Add more connection settings as needed
};


#endif // DATABASE_H
