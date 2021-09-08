#include <iostream>
using namespace std;
int binarySearch(int arr[],int start,int end,int key){
	int mid;
	while(start<=end){
		mid=(start+end)/2;
		if(arr[mid]==key)
		return 1;
		if(arr[mid]<key)
		start=mid+1;
		else
		end=mid-1;
		
		
	}
}
int main(){
	int arr[5]{10,23,45,70,90};
	int key;
	cin>>key;
	if(binarySearch(arr,0,5,key)==1){
		cout<<" Search Found..."; 
	}
	else{
		cout<<"No Search Found...";
	}
	return 0;
}
