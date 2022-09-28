#include<iostream>
using namespace std;
int main()
{
	int n,a[100],i,max=0;
	cout<<"Enter no of integers to enter:";
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]>0){
			max=a[i];
		}
	}
	cout<<"Max value: "<<max;
}
