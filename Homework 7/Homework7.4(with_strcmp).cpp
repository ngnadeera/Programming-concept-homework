#include <iostream>
#include <string.h>  //library to use the strcmp func
using namespace std;

int main() {
	
	char s[200] , d[200] ;      //two character arrays 
	
	int num;
		
		cout << "Enter first String: ";
		gets(s);
		cout << "Enter second String: ";
		gets(d);
		
		num = strcmp(s,d);   // if equal n = 1 ; if grater n = 1 ; if less than n = -1
		
		if (num==0)
		{
			cout << "first string is equal in size to the second string" << endl;
		}
		else if (num>0)
		{
			cout << "first String is greater than second String" << endl;
		}
		else
		{
			cout << "First String is less than second String" << endl;
		}	
		return 0;
	
	
	
	
	
}
