#ifndef BUSINESS_H
#define BUSINESS_H


#include "Employee.h"
#include "Customer.h"
#include "CreditCard.h"
#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
#include <iomanip>

class Business {


public:
	Business(const std::string & = "", const std::string & = "", const std::string & = "",
		const std::string & = "", const std::string & = "", const std::string & = "",
		int = 0);

	void displayCustomers();
	void displayEmployees();
	void displayBusiness();
	void displayPurchaseReport();
	void buyItem(int, CreditCard *ccPtr, int, double, const std::string &);

	void setName(const std::string &);
	void setPhone(const std::string &);
	void setEmail(const std::string &);
	void setAddress(const std::string &);
	void setCity(const std::string &);
	void setState(const std::string &);
	void setZip(int);
	void addEmployee(const Employee &);
	void addCustomer(const Customer &);
	
	std::string getName() const;
	std::string getPhone() const;
	std::string getEmail() const;
	std::string getAddress() const;
	std::string getCity()  const;
	std::string getState() const;
	int getZip() const;
	size_t getIndex(int);

private:
	const static size_t MAX_CUSTOMERS = 200, MAX_EMPLOYEES = 10;
	std::string businessName,
		phoneNumber,
		email,
		address,
		city,
		state;
	int zip;
	std::vector<Employee> employees;
	std::vector<Customer> customers;
};



#endif // !BUSINESS
