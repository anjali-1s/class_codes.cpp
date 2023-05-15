// Write a c++ program to demonstrate keywords try , catch and throw.

#include <iostream>
using namespace std;

int main () {
     try {
          int age = 19;
          if (age >= 18) {
               cout <<"congrats! you are eligible to vote."<<endl;
               cout <<"Bcz your age is :" <<age;
          }
          else {
               throw (age);
          }
     }
      catch (int age) {
           cout <<"sorry , you are not eligible to vote." <<endl;
           cout <<"Bcz your age is :" <<age;
      }
}