#include <iostream>
using namespace std;

int main(){
  //declare variables
	int circle_radius;
	float area, pi = 3.142;
  //print to console
	cout << "Anna ympyrän säde: ";
  //wait for user input, save input into 'circle_radius'
	cin >> circle_radius;
  //calculate area and save the result into 'area'-variable
	area = pi * (circle_radius * circle_radius);
  //print message and result
	cout << "Area of a circle with a given radius: " << area;
}
