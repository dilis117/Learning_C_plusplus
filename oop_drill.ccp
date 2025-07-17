#include <iostream>
//library for getline()
#include <string>
using namespace std;

//class definition
class PromptAndPrint{
public:
   string text;
   PromptAndPrint();
   PromptAndPrint(string new_text);
   void GetJobDone(string text);
};
//constructors
PromptAndPrint::PromptAndPrint(){
   text="";
}

PromptAndPrint::PromptAndPrint(string new_text){
   text = new_text;
}

void PromptAndPrint::GetJobDone(string text){
   cout << text;
   string user_input;
   //getline() for the user input if there are whitespaces
   getline(cin, user_input);
   cout << user_input << endl;
}

int main (void)
{   
   //message to be prompted
   char charStream[] = "Input something for printing: ";
   PromptAndPrint object1;
   object1.GetJobDone(charStream);
}
