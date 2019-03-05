#include<iostream>
using namespace std;
int main()
{
    int num,i=1;
    cin>>num;
     int no=num;
    if(no>0)
    {
        while(i<=5)
        {
            no=num;
            int res=no*i;
            cout<<res<<" ";
            i++;
        }
    }
}