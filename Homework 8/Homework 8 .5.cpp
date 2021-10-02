#include<iostream>
using namespace std ;

int pointer (int *p);
int main () {

int user_input;	
cout << "Enter a number :" ;
cin >> user_input ;              //getting the user input 
 
int *p = &user_input ; 
cout << "\nEnterd number is : " << pointer(p) << endl; 
	
	
	
}

int pointer (int *p){       //pointer to a value 
	
	return *p ;   //dereferencing

}
