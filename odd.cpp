#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    if(m>0&&n>0)
    {
    for(int i=m+1;i<n;i++)
    {
        if(i%2!=0)
            cout<<i<<" ";
    }
    }
    else
        cout<<"Invalid range";
    return 0;
}