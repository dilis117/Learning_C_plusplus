#include <iostream>
//math library for square root
#include <cmath>
using namespace std;

int main(){
  //declare variables
	int num1, num2;
	double hypotenuse, square;
  //write to console
	cout << "Give first number: ";
  //wait for the first integer
	cin >> num1;
  //write to console
	cout << "Give second number: ";
  //wait for the second integer
	cin >> num2;
  //calculate hypotenuse using sqrt-function
	hypotenuse = sqrt((num1*num1)+(num2*num2));
  //print result to console
	cout << "Length of the hypotenuse:" << hypotenuse;
}
