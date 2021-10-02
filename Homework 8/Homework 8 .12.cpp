#include<iostream>
using namespace std ;

void sort(int arr[] , int n);
int main() {
	
	int arr[] = {5,4,3,6,3,2};
	int *p = arr;
	int len = sizeof arr / sizeof(arr[0]);    //determining the size of the array
	
		cout << "Unsorted array : " ;
		for(int i=0 ; i < len ; i ++){
			
			cout << *(p+i) << " " ; 
	}

   cout << endl;

	for (int i = 0 ; i <= len ; i++){
		for (int j = i+1 ; j <= len ; j++){
			if (*(p+j)  <= *(p+i) ){       //sorting the array using pointers 
			
			
			// swapping the values 
			int temp = *(p+i);
			 *(p+i) = *(p+j) ;
			 *(p+j) = temp;
		
		}

		}
		
	}
	cout << "Sorted array :  " ;
		
	for (int i=0 ; i < len ; i++ ){
		
		cout<< *(p+i) << " "  ;
	}
		
	
	
}
