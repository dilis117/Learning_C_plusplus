#include <cstdio>
#include <iostream>
using namespace std;

int main(){
  //output to console
	cout << "Do you drink coffee or tea? (c/t) ";
  //save individual character into variable
	char drink = getchar();
  //declare int-variable
	int sugar=0;

  //switch-statement for coffee (c) or tea (t), break will stop the loop
	switch(drink){
    //if input character is 'c', then:
		case 'c':
			cout << "How many pieces of sugar? ";
      //save user input into 'sugar'-variable
			cin >> sugar;
      //if-statement to check amount of sugar, 1-2 pieces
			if(sugar<3 && sugar>=0){
				cout << "Coffee really cheers you up!";
				break;
			}
      //if-statement to check amount of sugar, 3 or more pieces
			else if(sugar>2){
				cout << "Coffee can be quite a strong flavor...";
				break;
			}
      //if input is negative or not an integer
			else{
				cout << "An error occurred in the program!";
				break;
			}
    //if input character is 't', then:
		case 't':
			cout << "How many pieces of sugar? ";
      //save user input into 'sugar'-variable
			cin >> sugar;
      //if-statement to check amount of sugar, 1-2 pieces
			if(sugar<3 && sugar>=0){
				cout << "Tea can often be calming!";
				break;
			}
        //if-statement to check amount of sugar, 3 or more pieces
			else if(sugar>2){
				cout << "Do you like your tea sweet?";
				break;
			}
      //if input is negative or not an integer
			else{
				cout << "An error occurred in the program!";
				break;
			}
    //if input character is not 'c' or 't', then:
		default:
			cout << "An error occurred in the program!";
			break;
	}
}
