#include<iostream>
#include<string.h>


using namespace std;

int main ()
{
  char s[100];   //hold the string
  cout << "Enter the sentence : ";
  gets(s);      // getting the user_input 
  
  char *token;         //  hold the separator value
  token = strtok(s,"\n "); //seperate the text by the spaces 
  int count = 0;      //to hold the count 
  while(token != NULL){     
  
  	count ++;
  	token = strtok(NULL,"\n ");
  	
  }
  cout << "There weere " << count << " words in that sentence ::";
  return 0;
}
