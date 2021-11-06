#include <iostream>
using namespace std;
double showMenu();
double takePurchase(double price);
double takePayment();
double displayInfo(double purchase, double payment);
int main()
{
	double price, preTaxPrice, payment;
	price = showMenu();
	preTaxPrice = takePurchase(price);
	payment = takePayment();
	displayInfo( preTaxPrice,  payment);
	return 0;
}
//shows the menu and asks for a choice, then returns the price
double showMenu()
{
	int choice;
	double cost;
	cout << "****Vending Machine****" <<
		endl << "Coke   $1.25" <<
		endl << "Pepsi   $1.00" <<
		endl << "Water   $2.00" <<
		endl << "Coffee    $1.50" <<
		endl << "Exit Menu" <<
		endl << endl <<
		"Enter your choice: ";
	cin >> choice;
	if (choice == 1)
		cost = 1.25;
	else if (choice == 2)
		cost = 1;
	else if (choice == 3)
		cost = 2;
	else if (choice == 4)
		cost = 1.50;
	else
		cost = 0;
	return cost;
}
double takePurchase(double price)
{
	int amount;
	cout << "How many do you want? ";
	cin >> amount;

	return amount * price;
}
double takePayment()
{
	double payment;
	cout << "How much is your payment? ";
	cin >> payment;

	return payment;
}
double displayInfo(double purchase, double payment)
{
	double tax, totalPrice, change;
	tax = purchase * 0.06;
	totalPrice = purchase + tax;
	change = payment - totalPrice;
	cout << endl << "Tax Amount: $" << tax << endl
		<< endl << "Total Purchase: $" << totalPrice << endl
		<< endl << "change: $" << change;
	return 0;
}
