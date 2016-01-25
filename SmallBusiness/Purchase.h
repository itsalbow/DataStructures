#ifndef PURCHASE_H
#define PURCHASE_H

#include "CreditCard.h"
#include <string>

class Purchase {
public:
	Purchase(CreditCard * = nullptr, int = 0, double = 0, const std::string & = "");

	void setId(int);
	void setAmount(double);
	void setNum(const std::string &);
	void setDescrip(const std::string &);

	int getId() const;
	double getAmount() const;
	std::string getNum() const;
	std::string getDescrip() const;

	// get last 4 digits of cc
	std::string getLastFour();

private:
	int pId;
	double pAmount;
	std::string ccNum, descrip;
	CreditCard * creditCard;
};

#endif // !PURCHASE_H