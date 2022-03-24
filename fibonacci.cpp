#include <iostream>
using namespace std;
int main(){
	
	cout<<"Enter n to find n length fibonacci series  ";
	int n;
	cin>>n;
	
	int a = 0;
	int b = 1;
	cout<<"fibonacci series is  "<<endl;
	cout<<a<<endl<<b<<endl;

	for(int i =1; i<=n ; i++){
		
		 int nextno = a+b;
		 cout<<nextno<<endl;
		 
		a=b;
		b=nextno;
		
	
	}	
	
	
	
	
}
