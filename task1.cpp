/* 
     Create a program that generates a random number and asks the
     user to guess it. Provide feedback on whether the guess is too
     high or too low until the user guesses the correct number.
*/

#include<iostream>
#include <cstdlib>
using namespace std;

int main() {
     int count = 0;
     bool isGuessed = false;
     int randomNo = 1 + (rand() % 10);
     while (!isGuessed) {
          int n;
          cout << "Guess Number among 0 - 10: "; cin >> n;
          count++;
          if(n == randomNo) {
               isGuessed = true;
          }
          else if(n > randomNo) {
               cout << "guess is too high" << endl;
          }
          else {
               cout << "guess is too low" << endl;
          }
     }
     cout << "You've Guessed in " << count << " attempts.";
}