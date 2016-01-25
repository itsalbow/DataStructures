#include "CreditCard.h"

using namespace std;

CreditCard::CreditCard(const string &num, int month, int year)
	: ccNum(num),
	ccMonth(month),
	ccYear(year)
{
}


void CreditCard::setNum(const string &num)
{
	ccNum = num;
}

void CreditCard::setMonth(int month)
{
	ccMonth = month;
}

void CreditCard::setYear(int year)
{
	ccYear = year;
}

string CreditCard::getNum() const
{
	return ccNum;
}

int CreditCard::getMonth() const
{
	return ccMonth;
}

int CreditCard::getYear() const
{
	return ccYear;
}
