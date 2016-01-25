#include "Customer.h"
#include "Purchase.h"
#include <iostream>
#include <iomanip>

using namespace std;


Customer::Customer(const string &name, const string &phone, const string &email, int account)
	: cName(name),
	cPhone(phone),
	cEmail(email),
	cAccount(account)
{
	pCount = 0;
}

// Methods
void Customer::addPurchase(const Purchase &p)
{
	if (pCount < MAX_SIZE) purchases.push_back(p);
}

void Customer::displayPurchases()
{
	// display Customer info
	cout << "\n________________________________________________" <<
		"\n\t\tCustomer Report" << "\n------------------------------------------------" <<
		"\nName: " << getName() <<
		"\nPhone: " << getPhone() <<
		"\nEmail: " << getEmail() <<
		"\nAccount #: " << getAccount() <<
		"\n\nPurchases:" <<
	endl;

	// display columns
	cout <<
		left << setw(5) << "ID" <<
		left << setw(8) << "Amount" <<
		left << setw(15) << "Description" <<
		left << setw(20) << right << "Credit Card" <<
	endl;

	// Loop and display following the correct collumns
	for (size_t i = 0; i < purchases.size(); i++) 
	{
		cout <<
			left << setw(5) << purchases[i].getId() <<
			left << setw(8) << purchases[i].getAmount() <<
			left << setw(15) << purchases[i].getDescrip() <<
			left << setw(20) << right << purchases[i].getLastFour() <<
		endl;
	}// end loop

	cout << "________________________________________________" << endl;
}


// Sets
void Customer::setName(const string &name)
{
	cName = name;
}

void Customer::setPhone(const string &phone)
{
	cPhone = phone;
}

void Customer::setEmail(const string &email)
{
	cEmail = email;
}

void Customer::setAccount(int account)
{
	cAccount = account;
}


// Gets
string Customer::getName() const
{
	return cName;
}

string Customer::getPhone() const
{
	return cPhone;
}

int Customer::getAccount() const
{
	return cAccount;
}

string Customer::getEmail() const
{
	return cEmail;
}
