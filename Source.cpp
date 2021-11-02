#include <iostream>
using namespace std;
//void getChoice(int addSub);
int getChoice();
void getNumbers(int &num1, int &num2);
int addition(int num1, int num2);
int subtraction(int num1, int num2);
int main()
{
	int addSub, num1, num2;
	getChoice();
	getNumbers(num1, num2);

	if (addSub = 1)
		addition(num1, num2);
	else
		subtraction(num1, num2);

	return 0;
}

//retrives choice between add and sub
int getChoice()
{
	int addSub;
	cout << "Enter your Choice, 1 for Addition, 2 for Subtraction" << endl;
	cin >> addSub;
	return addSub;
}
//retrieves numbers to add or sub
void getNumbers(int &num1, int &num2)
{
	cout << "Input first number: ";
	cin >> num1;
	cout << "Input second number: ";
	cin >> num2;

}
//basic addition function
int addition(int num1, int num2)
{
	cout << endl << "The result of the operation is: " << num1 + num2 << endl;
	return num1 + num2;
}
//basic subtraction function
int subtraction(int num1, int num2)
{
	cout << endl << "The result of the operation is: " << num1 - num2 << endl;
	return num1 - num2;
}

/*void getChoice(int addSub)
{
	cout << "Enter your Choice, 1 for Addition, 2 for Subtraction" << endl;
	cin >> addSub;
	if (addSub == 1)
		cout << "Addition" << endl;
	else if (addSub == 2)
		cout << "Subtraction" << endl;
	else
	{
		cout << "Invalid input" << endl;
		getChoice(addSub = 0);
	}
}*/