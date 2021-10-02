#include<iostream>
using namespace std ;

int main() {
	
int user_input ;

cout << "input a valule : " ;
cin >> user_input ;       //getting the user input 

int *user_inputptr = &user_input;       //assignning it to a pointer

cout << "\nMemory adress of the pointer to the variable is : " << &user_inputptr  << endl;     //returning the memory adress of the coresponding pointer
	
	
}


