#include <iostream>
#include <iomanip>  
using namespace std;


int main() {
	
	int t [2][5] ;    //  5 columns and 2 rows   10 elements  
	                  // all the elements in the second row - t[1][0] t[1][1] t[1][2] t[1][3] t[1][4]
	                  // all the elements in the third column of t    t[0][2]  t[1][2]
	
	
	t [0][1] = 0 ;
	
	for (int i=0 ; i < 2 ; i ++) {
		
		for (int j=0 ; j < 5 ; j++) {
			
			t[i][j] = 0;
		}	
	} 
	
		// I ------------------------------------
	for (int i = 0 ; i < 2 ; i ++) {
		  
		  for (int j = 0; j < 5 ; j++) {
		  	int y;
		  	cout << "input the value for the raw " << i << " column " << j << ": "  ;
		  	cin >> y;
		  	
		  	t[i][j] = y;
		  	
		  } 
		  
		
	} 
	
	// J --------------------------------------
	
	int min = t[0][0] ; 
	
	for (int i = 0 ; i < 2 ; i++) {
		
		for ( int j = 0 ; j < 5 ; j++) {
			int val = t[i][j];
			if (val <= min) {
				
				min = val;
				
			}
			
		}
	}
	
	cout << "minimum value of the array is : " << min << endl;
	
	
	// K --------------------------------------
	
	int j = 0;
	for ( int i = 0 ; i < 5 ; i ++){
		
		int val = t[j][i];
		cout << "the first raw "  << " column  " << i << " : " << val  << endl;	
		
	}
	
	// L-------------------------------------
	
	int total = t[0][3] + t[1][3];
	
	cout << "total of the forth column is : " << total << endl;
	
	
	
	
	// M -----------------------------------
	
	
	cout << "    \n              Array t in tabular format"<< endl ;
	cout << "---------------------------------------------------------- \n" << endl; 
	cout << "           C[0]    C[1]     C[2]     C[3]     C[5]    " ;
	cout << "\n\nR[0]" ;
	
	


			
			for (int j=0 ; j < 5 ; j ++) {
			
		       cout << setw(9)  << t[0][j];
		       
	}
		cout << "\n\nR[1]" ;
		
		
		for (int i=0 ; i < 5 ; i ++) {
			
		       cout << setw(9)  << t[1][i];
		   }    
				
		
			cout << "\n" << endl;
		


}  
