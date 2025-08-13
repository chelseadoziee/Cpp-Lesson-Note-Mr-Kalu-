//
// Created by Chelsea Dozie on 27/07/2025.
//

#include <iostream>
#include <cmath> //including c++ math library
 using namespace std;

int main() {
 string firstName = "Michael";
 string lastName = "Ojei";
 string fullName = firstName + " " + lastName;
char Lover[] = "Chelsea"; //an array of characters


firstName.append(" Chelsea "); // only used to add another string to an existing string
cout << "Your full name is: " + fullName << endl;
cout << firstName << endl;
 cout << lastName << endl;
 firstName[0] = 'R';
 cout << "The length of characters of your fullname is: " << fullName.length() << endl; // outputs the number of charaters of a string
cout << "The 4th index of your full name is: " << fullName[4] <<endl;
 cout << fullName[fullName.length()- 4]; // outputs characters backwards
 cout << fullName << "'s ONLY lover is " << Lover << endl;


 int x = 9;
 int y = 87;
 int squareroot = sqrt(x);
 cout << "the squareroot of of x is " << squareroot; //math expression to find the squareroot
 return 0;


}
