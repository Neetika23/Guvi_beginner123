#include<iostream>
using namespace std;
int main()
{
    int fact=1,num;
    cin>>num;
    if(num>0)
    {
    while(num!=0)
    {
        fact=fact*num;
        num--;
    }
    cout<<fact;
    }
    else
    cout<<"Invalid";
    return 0;
}