
#include "Customer.h"
#include "Business.h"
#include "Purchase.h"
#include "CreditCard.h"
#include "Employee.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


// Employees Arr
Employee employees[5];

// Customers Arr
Customer customers[3];

// Credit card pointers
CreditCard *bobPtr = nullptr;
CreditCard *jonPtr = nullptr;
CreditCard *linPtr = nullptr;

int main(){


	// Business
	Business fruitMarket("Joey's Fruit Market", "(899) 542 - 1332", "Joeys@JFruits.com", "355 Woodward dr", "Detroit", "MI", 32423);


	/********** Add Employees ************/
	fruitMarket.addEmployee(Employee(
		"Tom",								// name
		"Owner",							// position
		"(248) 555 - 4433",					// phone
		"55 Willow dr, Oxford, MI 48371",	// address
		"imtheboss@mycompany.com",			// email
		850000.00,							// salary
		15									// years
	));// end Tom

	fruitMarket.addEmployee(Employee(
		"Rick",								// name
		"Branch Manager",					// position
		"(248) 555 - 1123", 				// phone
		"09 Willow dr, Lake Orion, MI 3721",// address 
		"rick@mycompany.com", 				// email
		54320, 								// salary
		8									// years
	)); // end Rick

	fruitMarket.addEmployee(Employee(
		"Janet",						// name
		"Assistant Manager",			// position
		"(248) 221 - 1133", 			// phone
		"53 Main st, Oxford, MI 13981", // address
		"imtheboss@mycompany.com",		// email
		94820.00,						// salary
		1								// years
	)); // end Janet

	fruitMarket.addEmployee(Employee(
		"Chris",								// name
		"Sales Manager",						// position
		"(231) 223 - 4199",						// phone
		"109 Sate street, Rochestor, MI 49626", // address
		"chris@mycompany.com",					// email
		75493,									// salary
		15										// years
	)); // end Chris

	fruitMarket.addEmployee(Employee(
		"Molly",							// name
		"Sales Associate",					// position
		"(810) 322 - 9944", 				// phone
		"554 Silver Ave, Oxford, MI 48371", // address
		"molly@mycompany.com", 				// email
		850000.00,							// salary
		15									// years
	)); // end Molly
	/********** End Employees ************/


	/********** Add Customers ************/
	fruitMarket.addCustomer(Customer(
		"Bob",					// name
		"(248) 628 - 3809",		// phone
		"dude@Ilovefood.net",	// email
		1						// acc number
	)); // End Bob

	fruitMarket.addCustomer(Customer(
		"Jon",					// name
		"(555) 423 - 3322", 	// phone
		"JonTheMan@gmail.com", 	// email
		2						// acc number
	)); // End Jon

	fruitMarket.addCustomer(Customer(
		"Lin",					// name
		"(248) 628 - 8823",		// phone
		"sk8ergurl@msn.com",	// email
		3						// acc number
	)); // End lin
	/********** End Customers ************/


	/************ Purchases **************/

	// init credit card pointers
	bobPtr = new CreditCard("5900094402318844", 10, 2019);
	jonPtr = new CreditCard("9920008778322311", 8, 2017);
	linPtr = new CreditCard("1133483312887411", 1, 2020);

	// Add purchase passing customer account number

	// Bob's purchases
	fruitMarket.buyItem(1, bobPtr, 13, 5.34, "Pumpkin"); 
	fruitMarket.buyItem(1, bobPtr, 54, .64, "Apple");
	fruitMarket.buyItem(1, bobPtr, 42, .89, "Orange");

	// Jon's purchases
	fruitMarket.buyItem(2, jonPtr, 4, .40, "Tomato");
	fruitMarket.buyItem(2, jonPtr, 1, .24, "Strawberry");
	fruitMarket.buyItem(2, jonPtr, 18, .89, "Pear");

	// Lin's purchases
	fruitMarket.buyItem(3, linPtr, 16, 1.45, "Avacado");
	fruitMarket.buyItem(3, linPtr, 19, .44, "Lettuce");
	fruitMarket.buyItem(3, linPtr, 87, .89, "Cherry");


	/********** End Purchases ************/

	
	/****** Purchases ******/
	/*
	// Bob's Purchases
	customers[0].addPurchase(Purchase(bobPtr, 13, 5.34, "Pumpkin"));
	customers[0].addPurchase(Purchase(bobPtr, 54, .64, "Apple"));
	customers[0].addPurchase(Purchase(bobPtr, 42, .89, "Orange"));

	// Jon's Purchases
	customers[1].addPurchase(Purchase(jonPtr, 4, .40, "Tomato"));
	customers[1].addPurchase(Purchase(jonPtr, 1, .24, "Strawberry"));
	customers[1].addPurchase(Purchase(jonPtr, 18, .89, "Pear"));

	// Lin's Purchases
	customers[2].addPurchase(Purchase(linPtr, 16, 1.45, "Avacado"));
	customers[2].addPurchase(Purchase(linPtr, 19, .44, "Lettuce"));
	customers[2].addPurchase(Purchase(linPtr, 87, .89, "Cherry"));

	*/

	

	
	// Display Header
	cout << "Joey's Fruit Market Database\n------------------------------------------------" << endl;

	// Display Business
	cout << "\n*Displaying Business............" << endl;
	fruitMarket.displayBusiness();

	// Display Employees
	cout << "\n*Displaying Employees..........." << endl;
	fruitMarket.displayEmployees();

	// Display Customers
	cout << "\n*Displaying Customers..........." << endl;
	fruitMarket.displayCustomers();

	// Display Purchases
	cout << "\n*Displaying Purchases..........." << endl;
	fruitMarket.displayPurchaseReport();

}
