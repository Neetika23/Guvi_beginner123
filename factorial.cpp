#include<iostream>
using namespace std;
int main()
{
    int fact=1,num;
    cin>>num;
    while(num!=0)
    {
        fact=fact*num;
        num--;
    }
    cout<<fact;
    return 0;
}