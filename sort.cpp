#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[10];
    cin>>n;
	if(n>0)
	{
    for(int i=0;i<n;i++){
	   cin>>arr[i];
    }
    sort(arr, arr+n);
    for(int i=0;i<n;i++){
	   cout<<arr[i]<<" ";
    }
	}
	else
	{
		cout<<"Invalid size";
	}
    return 0;
}
