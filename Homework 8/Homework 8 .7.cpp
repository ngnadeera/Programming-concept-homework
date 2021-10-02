#include<iostream>
using namespace std ;


int factorial(int *x ) ;

int main() {
	
	int user_input ; 
	cout << "Enter a value : " ;         
	cin >> user_input ;              //getting the user input 
	
	int *p = &user_input ; 
	
	cout << "\nFactorial of " << *p << " is : " << factorial(p)  ;
	
	return 0;
}

int factorial(int *x ) {   //finding the factorial using a recursive function
	
	if (*x == 1) {
		return *x;
	}
	else {
		int z = *x -1;
		int *y = &z ;
		return *x *factorial(y);	 
	}
	
	
}
