#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[1000];
    cin>>n;
	if(n>0)
	{
    for(int i=0;i<n;i++){
	   cin>>arr[i];
    }
    int* i1; 
    i1 = std::max_element(arr,arr+n); 
  
    cout <<*i1; 
	}
	else{
	cout<<"Invalid Size";
    return 0;
}
