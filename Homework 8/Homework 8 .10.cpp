#include<iostream>
using namespace std ;

int main () {
	
	
	int count  = 0 ;
	char s[100] ;
	cout << "Enter a string : " ;
	cin >> s ;                 //getting the user input 
	char *p = s ;
	
	while ( *p != NULL) {  //or '\0'
		
		p++ ;        // go through array until confront with a null char 
		count ++ ;	//counting the elements 
	}
	
	cout << "\nNo of elements inisde the string is = "<< count << endl ;
	
}
