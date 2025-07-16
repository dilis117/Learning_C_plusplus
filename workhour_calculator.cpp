#include <iostream>
using namespace std;

int main(){
  //declare variables
	int days;
	float hours=0.0, average=0.0, total=0.0;
  //print instructions into console
	cout << "Ohjelma laskee yhteen haluamasi ajanjakson aikana tehdyt" << endl;
	cout <<	"työtunnit sekä keskimääräisen työpäivän pituuden." << endl;
	cout << "Kuinka monta päivää: " << endl;
  //save input into 'days'-variable
	cin >> days;
  //declare array with 'days'-variable, array length is 'days' value
	float arr[days];
  //for loop to collect workhours as long as 'i' is less than 'days' value
	for(int i =0;i<days;i++){
    //print message and increase 'i' value by 1
		cout << "Anna " << ++i << ". päivän työtunnit: ";
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
	cout << "Tehdyt tunnit yhteensä: " << total << endl;
	cout << "Keskimääräinen työpäivän pituus: " << average << endl;
	cout << "Syötetyt tunnit: ";
  //print array values one by one
	for(int i =0;i<days;i++){
		cout << arr[i];
	}
}
	
