/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <iostream>
int minimum(int num1,int num2);
int maximum(int num1,int num2);
int multiply(int num1,int num2);
using namespace std;

int main() {
  int no1,no2;

  cout<<"Enter a value for no 1 : ";
  cin>>no1;
  cout<<"Enter a value for no 2 : ";
  cin>>no2;

  cout<<"Minimum number : "<<minimum(no1,no2)<<endl;
  cout<<"Maximum number : "<<maximum(no1,no2)<<endl;
  cout<<"Multiply : "<<multiply(no1,no2)<<endl;
}

int minimum(int num1,int num2){
  if(num1>num2)
    return num2;
  else
    return num1;
  
}
int maximum(int num1,int num2){
  if(num1<num2)
    return num2;
  else
    return num1;
  
}
int multiply(int num1,int num2){
    return num1*num2;
}
