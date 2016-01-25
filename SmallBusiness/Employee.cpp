#include "Employee.h"
#include <string>

using namespace std;

Employee::Employee(const string &name, const string &position, const string &phone,
	const string &address, const string &email, double salary, int years)
	: eName(name),
	ePos(position),
	ePhone(phone),
	eAddress(address),
	eEmail(email),
	eSalary(salary),
	eYears(years)
{
}


void Employee::setName(const string &name)
{
	eName = name;
}

void Employee::setPos(const string &pos)
{
	ePos = pos;
}

void Employee::setPhone(const string &phone)
{
	ePhone = phone;
}

void Employee::setAddress(const string &address)
{
	eAddress = address;
}

void Employee::setEmail(const string &email)
{
	eEmail = email;
}

void Employee::setSalary(double salary)
{
	eSalary = salary;
}

void Employee::setYears(int years)
{
	eYears = years;
}

string Employee::getName() const
{
	return eName;
}

string Employee::getPos() const
{
	return ePos;
}

string Employee::getPhone() const
{
	return ePhone;
}

string Employee::getAddress() const
{
	return eAddress;
}

string Employee::getEmail() const
{
	return eEmail;
}

double Employee::getSalary() const
{
	return eSalary;
}

int Employee::getYears() const
{
	return eYears;
}
