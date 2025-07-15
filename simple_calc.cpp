//Ask two integers and print their sum, difference, product and remainder
#include <iostream>
using namespace std;

int main(){
  //declare variables
	int num1, num2, sum, difference, product, remainder;
  //print to console
	cout << "Syötä ensimmäinen kokonaisluku: ";
  //wait for the first integer
	cin >> num1;
  //print to console
	cout << "Syötä toinen kokonaisluku: ";
  //wait for the second integer
	cin >> num2;
  //calculate sum and save result
	sum=num1+num2;
	difference=num1-num2;
	product=num1*num2;
	remainder=num1%num2;
  //print results to console
	cout << num1 << "+"<<num2<<" = " <<sum<<endl;
	cout << num1 <<"-"<<num2<<" = "<<difference<<endl;
	cout << num1 <<"*"<<num2<<" = "<<product<<endl;
	cout << "Remainder: " <<remainder;
}
