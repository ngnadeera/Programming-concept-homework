#include<iostream> 
using namespace std ;

// to print the bording pass accordingly 
void bording_pass(int seat_number , int seat_class);
int main () {
	
	
	//number of seats .
	int x = 10;
	
	//seats array {0,0,0,0,0,0,0,0,0,0}
	int seats[x];
	
	//to store the user inputs
	int user_input ; 
	
	//for a temporary count
	int count ; 
	//yes or no input 
	char y_n ; 
	
	//terminate the whole process when ran out of seats 
	bool termination = true ;
	
	
	
	// to make the seats array and setting every value to 0
	for (int i=0 ; i < x ; i++) {
		
		seats[i] = 0;
		
	}
	
	
	//main loop
	while (termination) {
	
	
		cout << "\nWelcome !\n" << endl; 
	
		
		cout << "please enter 1 for the 'first class'.... " << endl; 
		cout << "please enter 2 for the 'second class'... " << endl;
		
		cout << "enter your answer : " ;
		 
		cin >> user_input ;  //user input ( 1 or 2 )
		
		
		while (user_input != 1 && user_input != 2){  //if user input a invalid value
		
		cout << "invalid input ! ... try again..";
		cout << "please enter 1 for the 'first class'.... " << endl; 
		cout << "please enter 2 for the 'second class'... " << endl;
		
		cout << "enter your answer : " ;
		 
		cin >> user_input ;
		
    }
    
        //if user want to book a first class seat
	    if (user_input == 1) { 
			count = 0;
	    	for (int i = 0 ; i < 5 ; i++) {
	    		if (seats[i] == 0 ) {
	    			
	    			seats[i] = 1 ; 
	    			bording_pass(i , 1) ;  //to print the bording pass
	    			cout << endl;
	    			count += 1;
	    			break;
	    			
				}
				
				
			} if (count == 0 ) { //to check whether the user wants a seat in the second class when the first class is filled
				
				for(int i = 5 ; i < 10 ; i++) {
					
					if (seats[i] == 0) {
						
						cout << "\nFirst class seats have ran out ! ... " << endl;
						cout << "Would you like to book in economy class ?....( y/n )  : ";  //yes or no input
						cin >> y_n ;
						if (y_n == 'y') {
							
							seats[i] = 1 ;   //researving a seat in the 2nd class
							bording_pass(i , 2) ;    // printing the bording pass
							cout << endl;
							break;
							
						}
						else {
							cout << "\nNext flight leaves in 3 hours..... /n";
							cout << "enjoy ! \n";
							break;
						}
						
						
					}
					else {      // all the seats are filled
						cout << "\nRan out of seats ! ...  \nNext flight leaves in 3 hours.....\nenjoy ! \n " << endl;
						termination = false;   //terminate the loop 
						break;
					}
					
				}
				
			} 
			
			
			
		}else    // if user wants a seat in the economy class
		
		{
			for (int i = 5 ; i < 10 ; i++) {
	    		count = 0;
				if (seats[i] == 0 ) {
	    			
	    			seats[i] = 1;
	    			bording_pass(i,2);
	    			count += 1 ;
	    			cout << endl;
	    			break;
	    			
				}
			}if (count == 0) {   //to check whether the user wants a seat in the first class when the second class is filled
			
			for(int j = 0 ; j < 5 ; j++) {
					
					if (seats[j] == 0) {   //when economy class is filled 
						
						cout << "\nEconomy class seats have ran out ! ... " << endl;
						cout << "Would you like to book in first class ?....( y/n )  : ";   //yes or no
						cin >> y_n ;
						if (y_n == 'y') {
							
							seats[j] = 1 ;
							bording_pass(j , 1) ;  //printing the bording pass
							cout << endl;
							break;
							
						}
						else {
							cout << "\nNext flight leaves in 3 hours..... \n";
							cout << "enjoy ! \n";
							break;
						}
						
						
					}
					else {
						cout << "\nRan out of seats ! ...  \nNext flight leaves in 3 hours.....\nenjoy ! \n " << endl;
						termination = false;   //terminate the main loop
						break;
					}
					
				}
				
			} 
			
		}	
	}  
    
}


// to print the bording pass accordingly 
void bording_pass(int seat_number , int seat_class) {
	
	
	cout << "\n\nyour seat has been researved !\n" << endl;
	cout << "---- your bording pass -----" << endl;
	cout << "your seat number is :  " << seat_number + 1 << endl;
	cout << "your seat_class is : " << seat_class << endl;
	cout << "--------------------------------" << endl;
	
}

