#include <iostream>
using namespace std;

//calculator class
class Calc{
  public:
  //method for returnin the sum
  int Sum(int first, int second);
};

//sum method implemented
int Calc::Sum(int first, int second){
  //calculate and return sum
  int sum = first + second;
  return sum;
}

//class for user interaction and printing
class Printer{
public:
  void PrintResult();
};

//PrinResult implemented
void Printer::PrintResult(){
  int first, second;
  //ask and save user input
  cout << "Enter first integer: ";
  cin >> first;
  cout << "Enter second integer: ";
  cin >> second;
  //create an object calc
  Calc calc;
  //call the Sum method
  int sum = calc.Sum(first, second);
  cout << "Sum is: " << sum;
}

//main function
int main(){  
  Printer object;
  object.PrintResult();
}
