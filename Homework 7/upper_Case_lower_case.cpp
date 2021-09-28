#include<iostream> 

using namespace std ;



void upper_case (char s[] ) ;   //predefied the lower_case function
void lower_case (char s[] ) ;   //predefiend the upper_case function
int main () {
	
	
	char s[100] ; // (a - 97 , z - 122)  , (A - 65 , Z - 90)

	
	cout << "enter the string :-  " ;  //get the string as a user input 
	cin >> s ;
	
    cout << "string in UPPER_CASE :- ";   
	upper_case(s);   //excecuting the upper_case function to the relavent charactera array 
	cout << "string in lower_case :- ";
	lower_case(s);   //excecuting the lower_case function to the relavent charactera array 
	
	
}


void upper_case (char s[] ) {    //getting a character array as a input 
	
	int len = sizeof(s);   //dermining the character array length
	
	for (int i =0 ; i < len ; i++) {
		
		int number = s[i];    // number - the integer value relavent to that perticular character
		
		if (number >= 97 && number <=122 ) {    //check whether if it is already a lower case
			
			int temp = s[i] - 32;     // converting it in to upper case , temp - temporary holding the integer value relavent to the char
			char x = temp;            // x - character relavent to the integer value
			
			s[i] = x ;    // assigning that value back to the original character array
			
		}	
	}
	
	cout << s << endl;    //printing the upper case char array
	
}



void lower_case (char s[] ) {   //getting a character array as a input 
	
	int len = sizeof(s);    //dermining the character array length
	
	for (int i =0 ; i < len ; i++) {
		
		int number = s[i];    // number - the integer value relavent to that perticular character
		
		if (number >= 65 && number <= 90 ) {   //check whether if it is already a upper case
			
			int temp = s[i] + 32;    // converting it in to lower case , temp - temporary holding the integer value relavent to the char
			char x = temp;          // x - character relavent to the integer value
			
			s[i] = x ;     // assigning that value back to the original character array
			
		}	
	}
	
	cout << s << endl;    //printing the upper lower char array
	
}


/* assumptions 
there are no spaces between the string that user inputs 
*/
