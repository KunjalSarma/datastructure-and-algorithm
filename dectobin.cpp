#include <iostream>
#include <math.h>
using namespace std;

int main(){
	cout<<"enter the no   ";
	int a;
	
	cin>>a;
	int ans = 0;
	int i = 0;
	
	while(a!=0){
		//to get the bit of the last digit
		int bit = a & 1;
		// as to store in reverse
		ans = ( bit* pow(10,i))+ ans;
		a = a>>1;
		i++;
		
		
	}
	
	cout<<"answer is  "<< ans<<endl;
	
}
