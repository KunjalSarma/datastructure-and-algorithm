#include <iostream>
#include <math.h>

using namespace std;
 
 int main(){
 	
 	cout<<"enter the no";
 	int x;
 	cin>>x;
 int ans = 0;
 	
 	while(x!=0){
 		int digit = x % 10;
        if( (ans> INT_MAX/10) || (ans< INT_MIN/10)){
            return 0;
        }
 		ans = ( ans * 10) + digit ;
 		x= x/ 10;
 		
 		
	 }
 	
 	cout << "answer is " << ans <<endl;
 }