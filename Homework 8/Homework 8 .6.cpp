#include<iostream>
using namespace std ;

int main() {
	int a , b , c; 
	int *p1 , *p2 , * p3 ;
	cout << "Eneter three values : " << endl ;
	cin >> a >> b >> c ;          //getting the user input 
	p1 = &a ; p2 = &b ; p3 = &c;         //assign the values in to a pointers
	
	int max ;
	int min  ;
	
	if (*p1 >= *p2) {
		max = *p1;	
	}
	else {
		max = *p2;
	}
	if (*p3 >= max ){
		max = * p3;
	}
	
	cout << "Maximun value : " << max << endl;  //getting the maximum and print 
	
	if (*p1 <= *p2) {
		min = *p1;	
	}
	else {
		min = *p2;
	}
	if (*p3 <= min ){
		min = * p3;
	}
	
	cout << "Minimum value : " << min << endl ;  //getting the maximum and print 
	
		
	}
	
	
	
	

