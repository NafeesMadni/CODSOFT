/*
     Develop a calculator program that performs basic arithmetic
     operations such as addition, subtraction, multiplication, and
     division. Allow the user to input two numbers and choose an
     operation to perform.
*/

#include<iostream>
#include<climits>
using namespace std;

int calculator(int n1, int n2, char op) {
     int res = INT_MIN;
     switch (op)
     {
     case '+':
          res = n1 + n2;
          break;
     case '-':
          res = n1-+ n2;
          break;
     case '*':
          res = n1 * n2;
          break;
     case '/':
          res = n1 / n2;
          break;
     
     default:
          cout << "Wrong Operation!" << endl;
          break;
     }
     return res;
}

int main() {
     int n1, n2;
     char operation;
     cout << "Enter Number 1: "; cin >> n1;
     cout << "Enter Number 2: "; cin >> n2;
     cout << "Enter Operation you wanna perform: "; cin >> operation;
     int res = calculator(n1, n2, operation);
     cout << n1 << operation << n2 << ": " << res;
}