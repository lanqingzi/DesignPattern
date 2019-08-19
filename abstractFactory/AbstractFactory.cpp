//
// Created by LAN on 7/29/2019.
//

#include "AbstractFactory.h"
#include <iostream>
using namespace std;

IUser* SqlServerFactory::createUser() {
    return new SqlServerUser();
}

IDepartment* SqlServerFactory::createDepartment() {
    return new SqlServerDepartment();
}

IUser* AccessServerFactory::createUser() {
    return new AccessServerUser();
}

IDepartment* AccessServerFactory::createDepartment() {
    return new AccessDepartment();
}

void SqlServerUser::insert() {
    cout << "Insert a user to Sql server" << endl;
}

User* SqlServerUser::get() {
    cout << "Get a user from Sql server" << endl;
    return nullptr;
}

void AccessServerUser::insert() {
    cout << "Insert a user to Access server" << endl;
}

User* AccessServerUser::get() {
    cout << "Get a user from Access server" << endl;
    return nullptr;
}

void SqlServerDepartment::insert() {
    cout << "Insert a department to Sql server" << endl;
}

Department* SqlServerDepartment::get() {
    cout << "Get a department from Sql server" << endl;
    return nullptr;
}

void AccessDepartment::insert() {
    cout << "Insert a department to Access server" << endl;
}

Department* AccessDepartment::get() {
    cout << "Get a department from Access server" << endl;
    return nullptr;
}