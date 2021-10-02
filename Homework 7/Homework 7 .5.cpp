#include<iostream> 
#include <cstring>
using namespace std ;

int main () {
	
	char  s[100] ;
	cout << "enter your-sentence : ";
	gets(s) ; 
	char token[3] = " " ;
     strtok( s , "\0" );
	
	cout << s << endl;
	
	
	
}
