#ifndef CREDITCARD_H
#define CREDITCARD_H
#include <string>

class CreditCard {

public:
	CreditCard(const std::string & = "", int = 0, int = 0);

	void setNum(const std::string &);
	void setMonth(int);
	void setYear(int);

	std::string getNum() const;
	int getMonth() const;
	int getYear() const;
	

private:
	int ccMonth, ccYear;
	std::string ccNum;

};

#endif // !CREDITCART_H

