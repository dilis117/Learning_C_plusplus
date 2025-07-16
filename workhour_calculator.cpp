#include <iostream>
using namespace std;

int main(){
  //declare variables
	int days;
	float hours=0.0, average=0.0, total=0.0;
  //print instructions into console
  //
	cout << "The program will calculate the total hours worked during the desired period and" << endl;
	cout <<	"the average length of the working day." << endl;
	cout << "Amount of days: " << endl;
  //save input into 'days'-variable
	cin >> days;
  //declare array with 'days'-variable, array length is 'days' value
	float arr[days];
  //for loop to collect workhours as long as 'i' is less than 'days' value
	for(int i =0;i<days;i++){
    //print message and increase 'i' value by 1
		cout << "Enter workhours of the day " << ++i << ". ";
    //decrease 'i' value by -1
			i--;
      //save input into array
			cin >> arr[i];
      //add input into 'total' value
			total += arr[i];
	}
  //calculate average
	average = total / days;
  //print messages
	cout << "Total workhours: " << total << endl;
	cout << "Average workday: " << average << endl;
	cout << "Entered hours: ";
  //print array values one by one
	for(int i =0;i<days;i++){
		cout << arr[i];
	}
}
	
