#include <iostream>
using namespace std;
int main(){
	  cout<<"enter the no to check prime or not  ";
	  int a;
	  cin >> a;
	  bool isPrime = 1;
	 if(a== 0 | a== 1)
	 {

	 	isPrime=0;
	 }
	
	  
	  for (int i =2 ;i<a; i++){
	  	
	  		if(a % i == 0){
		
				 
	  			//out<<"is not prime";
	  				isPrime=0;
	  				break;
	  		
		 				 }
		 	
	  }
	  	if(isPrime==0){
		 
		 			cout<<" not a prime no ";
				 }
		else {cout <<" is a prime no";
		}
	  		
	
	
}
