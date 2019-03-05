#include<iostream>
using namespace std;
int main()
{
    int n,a,d,i=1,res,sum;
    cin>>n>>a>>d;
    if(n>0)
    {
        while(i<=n)
        {
            res=a+(i-1)*d;
            sum+=res;
            i++;
        }
        cout<<sum;
    }
    else
        cout<<"Invalid";
    
}