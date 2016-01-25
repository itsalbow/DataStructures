#include "Business.h"
#include <algorithm>


using namespace std;

Business::Business(const string &name, const string &phone, const string &mail,
	const string &add, const string &city, const string &state, int z)

	:businessName(name),
	phoneNumber(phone),
	email(mail),
	address(add),
	city(city),
	state(state),
	zip(z)
{
}

// Pushing and Displaying
void Business::addEmployee(const Employee &emp)
{
	if (employees.size() + 1 != MAX_EMPLOYEES) {
		employees.push_back(emp);
	}
	else cerr << "Too many Employees" << endl;
}

void Business::addCustomer(const Customer &cus)
{
	if (customers.size() + 1 !=  MAX_CUSTOMERS) {
		customers.push_back(cus);
	}
	else cerr << "Too many Customers" << endl;
}

void Business::displayCustomers()
{
	cout << "\nCurrent Customers\n-------------------" << endl;
	for each (Customer custo in customers)
	{
		cout << "Name: " << custo.getName() <<
			"\nAccount: " << custo.getAccount() <<
			"\nPhone: " << custo.getPhone() <<
			"\nEmail: " << custo.getEmail() <<
			"\n.............................. End Customers" << endl;
	}
}

void Business::displayEmployees()
{
	cout << "\nCurrent Employees\n-------------------" << endl;
	for each (Employee emp in employees)
	{
		cout << "Name: " << emp.getName() <<
			"\nPosition: " << emp.getPos() <<
			"\nSalary: " << emp.getSalary() <<
			"\nYears Working: " << emp.getYears() <<
			"\nAddress: " << emp.getAddress() <<
			"\nPhone: " << emp.getPhone() <<
			"\nEmail: " << emp.getEmail() <<
			"\n.............................. End Employees" << endl;
	}
}

void Business::displayBusiness()
{
	cout << "\nBusiness\n-------------------" << 
		"\nBusiness Name: " << getName() <<
		"\nAddress: " << getAddress() << ", " << getCity() << ", " << getState() << " " << getZip() <<
		"\nPhone: " << getPhone() <<
		"\nEmail: " << getEmail() <<
		"\n.............................. End Business" << endl;
}

void Business::buyItem(int cId, CreditCard *ccPtr, int productId, double amnt, const string &descrip)
{
	size_t index = getIndex(cId);

	if (index != -1) {
		customers[index].addPurchase(Purchase(ccPtr, productId, amnt, descrip));
	}
}

void Business::displayPurchaseReport() 
{
	cout << "\nJoey's Fruit Market\n------------------------------------------------\n" <<
		"\n////////////// PURCHASE REPORT /////////////\n";

	for each (Customer c in customers)
	{
		c.displayPurchases();
	}
}

//////////////////////////////////// End displays and vector methods

// sets
void Business::setName(const string &name)
{
	businessName = name;
}

void Business::setPhone(const string &phone)
{
	phoneNumber = phone;
}

void Business::setEmail(const string &e)
{
	email = e;
}

void Business::setAddress(const string &add)
{
	address = add;
}

void Business::setCity(const string &c) {
	city = c;
}

void Business::setState(const string &s) {
	state = s;
}

void Business::setZip(int z) {
	zip = z;
}


// gets
size_t Business::getIndex(int lookup)
{
	for (size_t i = 0; i < customers.size(); i++) {
		if (customers[i].getAccount() == lookup) {
			return i;
		}
	}

	return -1;
}

string Business::getEmail() const {
	return email;
}

string Business::getName() const {
	return businessName;
}


string Business::getAddress() const {
	return address;
}

string Business::getCity() const {
	return city;
}
string Business::getState() const {
	return state;
}
int Business::getZip() const
{
	return zip;
}
string Business::getPhone() const {
	return phoneNumber;
}





