#include<iostream>
using namespace std ;

int main () {

	int n ; 
	int user_input ; 
	cout << "How many elements : " ;
	cin >> n;                 //getting the user input 
	int arr[n] ;
	int *p = arr ;         //assigning the array in to a pointer 
	
	for (int i = 0 ; i < n ; i ++) {
		cout << "Enter the value of the element " << i+1  << " : " ;
		cin >> user_input   ;      //getting the user input 
		arr[i] = user_input ; 
		
		
	}
	
	for (int i = 0 ; i < n ; i++) {
		
		cout << *p << " " ;
		p++ ;       //go through the array by increasing the pointer value by 1
		
		
	}
	
}
