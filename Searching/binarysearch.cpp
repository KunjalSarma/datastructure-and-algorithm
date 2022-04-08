#include <iostream>
using namespace std;
	int binsearch(int arr[],int size, int key){
		int start=0;
		int end=size-1;
		//optimization mid = start +(end -start)/2;
		int mid = (start + end)/2;
		
		while(start<=end){
			
			if(arr[mid]== key){
				return mid;
			}
			if(key>arr[mid]){
				start = mid +1;
			}
			if(key<arr[mid]){
				end= mid -1;
			}
				//optimization mid = start +(end -start)/2; to as int is 2^31 limited
			mid =( start + end )/2;
			
			
			
		}
		return -1;
	}

int main(){

	
int odd[5]={3,8,11,14,16};
int even[6]={4,5,6,8,9,11};
	

	int index = binsearch(even,6,11);
	cout<<"The element is at index  "<<index;
	
}
