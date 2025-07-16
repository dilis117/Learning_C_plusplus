#include <iostream>
//fstream for file-handling
#include <fstream>
using namespace std;

//abstracts
void print_matrix(int matrix[5][5]);
int calc_sum(int matrix[5][5]);

int main(void)
{
  //declare array and integer
  int matrix[5][5];
  int sum;
  //declare file to be read
  ifstream value("matrix.txt");
  //if not readable, print error
  if (!value){
        cout << "Failed to open the file...";
  }
  //if readable, then read file to the array 5 by 5
  else {
    for (int y=0; y<5;y++){
          for (int x=0;x<5;x++){
            value >> matrix[y][x];
          }
    }
    //close file
    value.close();
    //print text
    cout << "Matrix:" << endl;
    //call 'print_matrix'-function with 'matrix'-array as an argument
    print_matrix(matrix);
    //call 'calculate_sum'-function with 'matrix'array and save the returned value to 'summa'-variable
    sum = calc_sum(matrix);
    //print value stored to 'sum'-variable
    cout << "Sum of the matrix values: " << sum << endl;
  }
}

//function for print matrix, takes int array[5][5] as an argument
void print_matrix(int matrix[5][5]){
  //initialize first for-loop
  for(int y=0;y<5;y++){
    //initialize second for-loop
    for(int x=0;x<5;x++){
      //print values on the line and put tab between
      cout << matrix[y][x] << "\t";
    }
    //after every line break line
    cout << endl;
  }
}
//function for calculating matrixes
int calc_sum(int matrix[5][5]){
  //declare 'sum'-variable
  int sum=0;
  //initialize first for-loop
  for(int y=0;y<5;y++){
    //initialize second for-loop
    for(int x=0;x<5;x++){
      //add every value into 'sum'-variable
      sum +=matrix[y][x];
    }
  }
  //return 'sum'-variable and store it into 'sum'-variable on the main (same name, different int variable)
  return sum;
}
