#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public:
	Employee(const std::string & = "", const std::string & = "", const std::string & = "",
		const std::string & = "", const std::string & = "", double = 0, int = 0);

	void setName(const std::string &);
	void setPos(const std::string &);
	void setPhone(const std::string &);
	void setAddress(const std::string &);
	void setEmail(const std::string &);
	void setSalary(double);
	void setYears(int);

	std::string getName() const;
	std::string getPos() const;
	std::string getPhone() const;
	std::string getAddress() const;
	std::string getEmail() const;
	double getSalary() const;
	int getYears() const;

private:
	std::string eName,
		ePos,
		ePhone,
		eAddress,
		eEmail;
	double eSalary;
	int eYears;
};








#endif // !EMPLOYEE_H
