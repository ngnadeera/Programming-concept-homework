#include<iostream>

using namespace std ;

int main () {
	// Q1 -----------------------
	double *d_var,*d_array; 
	
	d_var = new double;
    d_array = new double[10];
    
    
    // Q2 ----------------------
    cout<<"enter the value into the variable";
    cin>> *d_var;//takes input
    cout <<*d_var;// display output
	
	// Q3 ------------------------
	
	
	for (int i = 0 ; i <10 ; i++){
		
		(d_array ++ ) = 1.0 ; 
		
	}
	
	delete d_var , d_array;
	
}


