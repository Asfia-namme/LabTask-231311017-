/*
To print Floyd’s Triangle:
0
01
101
0101
10101
*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,a,b;

    for(i=1;i<=5;i++)
    {
        if(i%2==0)
        {
            a=1;
            b=0;
        }
        else
        {
            a=0;
            b=1;
        }
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
               cout<<a;
            else
               cout<<b;
        }

        cout<<endl;
        
    }
}