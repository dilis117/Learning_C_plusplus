#include <iostream>
using namespace std;

int main(){
  //declare integers and float -variables
	int selection, num1, num2, int_result;
	float fl_result;
  //print instructions into console
	cout << "The following calculations are available to you::"<<endl;
	cout << "1: subtraction" << endl;
	cout << "2: addition"<<endl;
	cout << "3: multiplication"<<endl;
	cout << "4: division"<<endl;
	cout << "5: remainder"<<endl;
  //save input into 'selection'variable
	cout << "Select calculation: ";
	cin >> selection;
  //save input into 'num1'variable
	cout << "First number: ";
	cin >> num1;
  //save input into 'num2'variable
	cout << "Second number:";
	cin >> num2;

  //switch-statement
	switch(selection){
    //switch cases 1-5 and default
		case 1:
      //if selection is '1' subtract 'num2' from 'num1'
			int_result=num1-num2;
      //print message and result into console
			cout << num1<<"-"<<num2<<" = "<<int_result;
			break;
		case 2:
      //if selection is '2' add 'num2' to 'num1'
			int_result=num1+num2;
      //print message and result into console
			cout << num1<<"+"<<num2<<" = "<<int_result;
			break;
		case 3:
      //if selection is '3' multiply 'num1' by 'num2'
			int_result=num1*num2;
      //print message and result into console
			cout << num1<<"*"<<num2<<" = "<<int_result;
			break;
		case 4:
      //if selection is '4' divide 'num1' by 'num2'
			fl_result=num1/num2;
      //print message and result into console
			cout << num1<<"/"<<num2<<" = "<<fl_result;
			break;
		case 5:
      //if selection is '5' calc 'num1' remainder 'num2'
			int_result=num1%num2;
      //print message and result into console
			cout << num1<<"%"<<num2<<" = "<<int_result;
			break;
    //if input is something else than 1-5
		default:
			cout << "Error";
			break;
	}
}
