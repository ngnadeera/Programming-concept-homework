#include<iostream>
using namespace std ;

int main() {

int user_input;

cout << "Enter a number :" ;
cin >> user_input ;            //getting the user input

cout << "\nEnterd value is : " << *(&user_input)  << endl;      //dereferensing the variable and getting the memory adress



	
}
