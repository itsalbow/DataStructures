#include "Purchase.h"
#include <string>

using namespace std;


Purchase::Purchase(CreditCard * cPtr, int id, double amnt, const string &description)
	: pId(id),
	pAmount(amnt),
	creditCard(cPtr),
	descrip(description)
{
	Purchase::setNum(creditCard->getNum());
}


string Purchase::getLastFour()
{
	string lastFour = "**** **** **** " + getNum().substr(12);
	return lastFour;
}


void Purchase::setId(int id) {
	pId = id;
}
void Purchase::setAmount(double amnt) {
	pAmount = amnt;
}
void Purchase::setNum(const string &num) {
	ccNum = num;
}
void Purchase::setDescrip(const string &description) {
	descrip = description;
}



int Purchase::getId() const
{
	return pId;
}

double Purchase::getAmount() const
{
	return pAmount;
}

string Purchase::getNum() const
{
	return ccNum;
}
string Purchase::getDescrip() const
{
	return descrip;
}