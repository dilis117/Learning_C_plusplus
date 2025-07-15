#include <iostream>
using namespace std;

int main(){
  //declare double-variables
	double markka, euro, euro_multiplier=5.94573;
  //ask for finnish markka
	cout << "Give amount in Finnish markka: ";
  //save the user input in to 'markka'-variable
	cin >> markka;
  //calculate 'euro' by dividing 'markka' by 'euro_multiplier'
	euro = markka / euro_multiplier;
  //print message and 'euro'-variable
	cout << "Markka to euro: " << euro;	
}
