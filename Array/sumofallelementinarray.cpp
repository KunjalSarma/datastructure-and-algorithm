#include <iostream>
using namespace std;
int sumOfAllElement(int num[],int n){
	int sum=0;
	for (int i=0;i<n;i++){
		sum = sum + num[i];
	}
	return sum;
}

int main(){
	cout<<"enter size of array ";
	int size;
	cin>>size;
	
	int num[100];
	cout<<"enter the elements ";
	for (int i=0;i<size;i++){
		cin>>num[i];
	}
	
cout<<"sum of all elemnts  "<<sumOfAllElement(num,5);
	
}
