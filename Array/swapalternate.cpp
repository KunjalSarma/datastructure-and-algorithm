#include<iostream>
using namespace std;
void printArray(int arr[],int n){
		for(int i =0 ;i<n;i++){
		cout<<arr[i]<<" ";
		}
		cout<<endl;
		
	}
	
	void swapAlternate(int arr[],int size){
		for (int i=0;i<size;i+=2)
		{
		
		    if(i+1 < size){
	
		swap(arr[i],arr[i+1]);	
		                }
		}
	}
int main(){
	
	
	int even[4]={4,5,6,9};
	int odd[5]={8,4,5,6,7};

	swapAlternate(even,4);
		printArray(even,4);
	
		swapAlternate(odd,5);
	printArray(odd,5);
	
}
