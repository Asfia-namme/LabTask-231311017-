/*
To print the following pattern till n number of user input:
1
22
333
4444
……..
*/ 

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter value of n:";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}