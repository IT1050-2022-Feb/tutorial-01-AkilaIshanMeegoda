/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <iostream>
using namespace std;

int main() {
  float marks1,marks2;
  float average;
  
  cout<<"Input marks of subject 1 : ";
  cin>>marks1;
  cout<<"Input marks of subject 2 : ";
  cin>>marks2;
  
  average=(marks1+marks2)/2.0;
  
  cout<<"Average of the two marks : "<<average<<endl;
}
