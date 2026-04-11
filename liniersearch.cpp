#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[n];
	cout<<"Enter no. of elements of array: ";
	cin>>n;
	cout<<"Enter of elements of array: ";
	for(int i=0;i<n;i++){
	cin>>arr[i];}
	
	cout<<"Elements of array: ";
	for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
	}
	int x;
	cout<<"\nEnter elemets to find: ";
	cin>>x;
	int flag=0;
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			cout<<"Element found at "<<i<<" Index";
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"Element not found!!";
	}
	
	return 0;
}
