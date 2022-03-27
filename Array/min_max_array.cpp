#include <iostream>
using namespace std;
int getMax(int num[],int n){
	int max = INT_MIN;

	for (int i=0;i<n;i++){
			//max = max(max, num[i]); short cut
		if(num[i]>max){
			max = num[i];
		}
	}
	return max;
}

int getMin(int num[],int n){
	int min = INT_MAX;
	for (int i=0;i<n;i++){
		if(num[i]<min){
			min = num[i];
		}
	}
		return min;
	
}

int main(){
	//min and max array
	cout<<"enter the array";
	int size;
	cin>>size;
	//bad practice
	//int num[size]
	
	int num[100];
	for (int i=0; i<size;i++){
		cin>>num[i];
		
	}
	cout<<"max value of array  "<<getMax(num,5)<<endl;
	cout<<"min value of array  "<<getMin(num,5)<<endl;
	
	
	
	
	
}
