#include "employee.h"

bool Employee::isRegistered = false;

Employee::Employee(QDate birthday, QString firstname, QString lastname, QString gender, Company* companyPtr, QDateTime hiredate, double salary, int children)
{
    if(!isRegistered)
    {
        qRegisterMetaType<Employee>("Employee");
        isRegistered = true;
    }
    this->id = -1;
    this->birthday = birthday;
    this->firstname = firstname;
    this->lastname = lastname;
    this->gender = gender;
    this->companyPtr = companyPtr;
    this->hiredate = hiredate;
    this->salary = salary;
    this->children = children;
}

Employee::Employee(int id, QDate birthday, QString firstname, QString lastname, QString gender, Company* companyPtr, QDateTime hiredate, double salary, int children)
{
    if(!isRegistered)
    {
        qRegisterMetaType<Employee>("Employee");
        isRegistered = true;
    }
    this->id = id;
    this->birthday = birthday;
    this->firstname = firstname;
    this->lastname = lastname;
    this->gender = gender;
    this->companyPtr = companyPtr;
    this->hiredate = hiredate;
    this->salary = salary;
    this->children = children;
}

Employee::Employee(const Employee& other)
{
    id = other.id;
    birthday = other.birthday;
    firstname = other.firstname;
    lastname = other.lastname;
    gender = other.gender;
    companyPtr = other.companyPtr;
    hiredate = other.hiredate;
    salary = other.salary;
    children = other.children;
}

QList<QbPersistable*> Employee::getPointers()
{
    return QList<QbPersistable*>() << companyPtr;
}