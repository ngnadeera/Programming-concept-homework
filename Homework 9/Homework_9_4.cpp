#include<iostream>

using namespace std ;

int main () {



cout << "Test data" << endl ;
cout << "\nInput total number of elements(1 to 100) :  ";
int *n = new int;
int *p = new int ; 
cin >> *n;

cout << "Number " << 1 << ": " ;
cin >> *p ;

int *max = new int ; 
*max = *p ; 



for (int i = 1 ; i < *n ; i++) {
	
	cout << "Number " << i+1 << ": " ;
	cin >> *p ; 
	
	if (*p > *max) {
		
		*max = *p;
	}
	
}

cout << "\nExpected output " << endl; 
cout << "\nThe largest element is : " << *max ;

delete p,n,max ;








}
