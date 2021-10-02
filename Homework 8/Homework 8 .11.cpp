#include<iostream>
using namespace std ;

int main () {


	int vowel  = 0 ;       // to count  vowels 
	int count ;        //to count consonants
	char s[100] ;
	cout << "Enter a string : " ;
	cin >> s ;                  //getting the user input 
	char *p = s ;
	
	
while ( *p != NULL ) {
	
	if ( *p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u'||*p=='A'
	 ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U' ){         // check whether if it a vowel or  not
		
		vowel ++ ;	             //increacing the vowel count 

	}else {
		count ++;            //increasing the consonants count 
	}
	
	p++; 
}
	
	cout << "\nNo of vowels inisde the string is = "<< vowel << endl ; 	
	cout << "\nNo of consonants inisde the string is = " << count  ;  
}


