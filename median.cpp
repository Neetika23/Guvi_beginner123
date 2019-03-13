#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[10];
    cin>>n;
    if(n>0)
    {
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr, arr+n);
		float median=0;
		if(n%2 == 0)
			median = (arr[(n-1)/2] + arr[n/2])/2.0;
		else
			median = arr[n/2];
		cout<<median;    
    }
    else
    {
        cout<<"Invalid size";
    }
    
    return 0;
}
