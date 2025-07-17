#include <iostream>
#include <string>
using namespace std;

//class definition
class PrintClass {
public:
  string text;

  //default constructor
  PrintClass();
  //constructor with a parameter
  PrintClass(string new_text);
  //print method
  void PrintText(string text);
};

//default constructor
PrintClass::PrintClass(){
  text = "";
}

//constructor with a parameter
PrintClass::PrintClass(string new_text) {
    text = new_text;
}

//print method
void PrintClass::PrintText(string text){
  cout << text;
}

int main()
{
  //declare variable
  char charStream[50];
  cout << "Give input that I print: ";
  //store input into variable  
  cin.get(charStream, 50);
  //create and initialize an object
  PrintClass printText;
  //call object with argument
  printText.PrintText(charStream);
}
