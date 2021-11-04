#include <iostream>
using namespace std;
double showMenu();
void takePurchase(double price);
int main()
{
	double price;
	price = showMenu();

	return 0;
}
//shows the menu and asks for a choice, then returns the price
double showMenu ()
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
void takePurchase(double price)
{
	int amount;
	cout << "How many do you want? ";
	cin >> amount;
	

}