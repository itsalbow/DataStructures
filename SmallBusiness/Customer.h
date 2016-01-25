#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Purchase.h"
#include <vector>
#include <string>

class Customer {

public:
	Customer(const std::string & = "", const std::string & = "",
		const std::string & = "", int = 0);

	// return purchases
	void displayPurchases();

	// sets
	void setName(const std::string &);
	void setPhone(const std::string &);
	void setEmail(const std::string &);
	void setAccount(int);
	void addPurchase(const Purchase &);

	// gets
	std::string getName() const;
	std::string getPhone() const;
	int getAccount() const;
	std::string getEmail() const;

private:
	std::string cName, cPhone, cEmail;
	int cAccount;
	size_t pCount;
	const static size_t MAX_SIZE = 1000;
	std::vector<Purchase> purchases;

};

#endif // !CUSTOMER_H
