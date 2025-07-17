#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
  string name, race, sound;
  int age;

  Dog();
  Dog(int new_age, string new_name, string new_race, string new_sound);
  string Bark();
  void PrintInfo();
};
Dog::Dog(){
  age=0;
  name="";
  race="";
  sound="";
}
Dog::Dog(int new_age, string new_name, string new_race, string new_sound){
  age=new_age;
  name=new_name;
  race=new_race;
  sound=new_sound;
}
//return sound
string Dog::Bark(){
  return sound;
}
void Dog::PrintInfo(){
  cout << "Name: " << name << endl << "Age: " << age << endl << "Race: " << race << endl;
}

int main()
{
  //init new dog 'pico'
  Dog pico(2, "Pico", "Collie", "Whuff!!!");
  cout << "Dog info:" << endl;
  //call method 'PrintInfo() for object 'pico'
  pico.PrintInfo();
  //call method 'Bark()'
  cout << "Dog says: " << pico.Bark();
}
