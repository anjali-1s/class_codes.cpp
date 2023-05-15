#include <iostream>
using namespace std;

int main () {
     try {
          int age = 17;
          if (age >= 18) {
               cout <<"you are eligible to vote.";
          }
          else {
               throw -1;
          }
     }
          catch (int num) {
               cout <<"you are not eligible to vote." <<endl;
               cout <<"Error :" <<num;
          }
     }
