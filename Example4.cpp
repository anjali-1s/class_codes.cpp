#include <iostream>
using namespace std;

int main () {
     try {
          int age = 16;
          if (age >= 18) {
               cout <<"you are eligible to vote.";
          }
          else {
               throw -1;
          }
     }
     catch (...) {
          cout <<"sorry! , you are not eligible to vote.";
     }
}