#include <iostream>
using namespace std;

int main(){
  //declare variables
  int num1, remainder;
  //message to console
	cout << "Input an integer: ";
  //save user input into 'num1'-variable
	cin >> num1;
  //calculate 'num1' remainder
	remainder=num1%2;
  //if-statement, zero means even
	if(remainder==0)
  //if remainder is zero, print message to console
		cout << "Number " << num1 << " is even.";
	else if(remainder==1)
  //if remainder is one, print message to console
		cout << "Number " << num1 << " is not even.";
  //if remainder is not zero or one, print error to console
	else
		cout << "Error";
}
