#include<iostream>
#include<stdio.h>
using namespace std ;

int main () {

	int  num, rem, rev=0 ;
	
	int  *pn, *pr ;
	printf(" Enter the number : ") ;
	
	cin >> num;            //getting the user input 
	
	pn = & num ; //adress of the num
	pr = & rev ; //adress of rev
	
	do
	{
	rem = ( *pn ) % 10 ;   //422%10 = rem =  2   / 2  
	*pr = ( *pr * 10 ) + rem ;  //rev = 0 * 10 + 2 = 2   2*10  
	*pn = ( *pn ) / 10 ;  // num = num / 10 = 42    4 
	}while(  *pn > 0) ;
	cout << "\nReverse of Number is : " << *pr ;
	return ( 0 );

	
}









