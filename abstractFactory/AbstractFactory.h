//
// Created by LAN on 7/29/2019.
//

#ifndef DESIGNPATTERN_ABSTRACTFACTORY_H
#define DESIGNPATTERN_ABSTRACTFACTORY_H

class IUser;
class IDepartment;

class User {

};

class Department {

};

class IFactory {
public:
    virtual IUser* createUser() = 0;
    virtual IDepartment* createDepartment() = 0;
};

class SqlServerFactory : public IFactory {
public:
    IUser* createUser() override;
    IDepartment* createDepartment() override;
};

class AccessServerFactory : public IFactory {
public:
    IUser* createUser() override;
    IDepartment* createDepartment() override;
};

class IUser {
public:
    virtual void insert() = 0;
    virtual User* get() = 0;
};

class SqlServerUser : public IUser {
public:
    void insert() override;
    User* get() override;
};

class AccessServerUser : public IUser {
public:
    void insert() override;
    User* get() override;
};

class IDepartment {
public:
    virtual void insert() = 0;
    virtual Department* get() = 0;
};

class SqlServerDepartment : public IDepartment {
public:
    void insert() override;
    Department* get() override;
};

class AccessDepartment : public IDepartment {
public:
    void insert() override;
    Department* get() override;
};


#endif //DESIGNPATTERN_ABSTRACTFACTORY_H
