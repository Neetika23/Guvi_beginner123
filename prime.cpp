#include<iostream>
using namespace std;
int main()
{
    int n;
    bool isprime=true;
    cin>>n;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            isprime=false;
            break;
        }
    }
    if(isprime)
        cout<<"yes";
    else
    cout<<"no";
    return 0;
}
    
