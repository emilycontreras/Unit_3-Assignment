/*
Emily Contreras COSC-1436-57001
Created on replit 
This program will enable the user to input 4 values the program will then determine arithmetic calculations based on those values.
*/

#include <iostream>
using namespace std;
int main() {

double num1, num2;
int num3, num4;

double add, sub, mult, div;
int mod;

cout<< "Enter Number 1: " << endl; //output
cin>> num1; //input

cout<< "Enter Number 2: " << endl; //output
cin>> num2; //input

if (num2 == 0) //process
  {
   cout<<"Division by 0 is not permitted in math, please choose another number: "<< endl; //output
   cin>> num2; //input

   add = num1 + num2; //process
   sub = num1 - num2; //process
   mult = num1 * num2; //process
   div = num1 / num2; //process

   cout<<"The sum of Numbers 1 & 2 is:  " << add << endl; //output
   cout<<"The diffrence of Numbers 1 & 2 is:  " << sub << endl; //output
   cout<<"The product of Numbers 1 & 2 is:  " << mult << endl; //output
   cout<<"The quotient of Numbers 1 & 2 is:  " << div << endl; //output
  }

else  
    {
 add = num1 + num2; //process
 sub = num1 - num2; //process
 mult = num1 * num2; //process
 div = num1 / num2; //process

 cout<<"The sum of Numbers 1 & 2 is:  " << add << endl; //output
 cout<<"The diffrence of Numbers 1 & 2 is:  " << sub << endl; //output
 cout<<"The product of Numbers 1 & 2 is:  " << mult << endl; //output
 cout<<"The quotient of Numbers 1 & 2 is:  " << div << endl; //output
    }

cout<< "Enter Number 3: " << endl; //output
cin>> num3; //input

cout<< "Enter Number 4: " << endl; //output
cin>> num4;
if (num4 == 0) //process
  {
    cout<<"Division by 0 is not permitted in math, please choose another number: " << endl; //output
    cin>> num4; //input
    mod = num3 % num4; //process
    cout<<"The remainder of Numbers 3 & 4 is: " << div << endl; //output
   }

else 
   { 
    mod = num3 % num4; //process
    cout<<"The remainder of Numbers 3 & 4 is: " << div << endl; //output
   }

  return 0;
}