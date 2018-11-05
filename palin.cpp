#include <iostream>
using namespace std;

int main()
{
     int n, num, digit, rev = 0;
     cin >> num;
     if(num<=1000)
     {
     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     if (n == rev)
         cout <<"Yes";
     else
         cout <<"No";
}
    return 0;
}