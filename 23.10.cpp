#include<iostream>
using namespace std;
int main()
{
    int a[10],i;
    cout<<"Enter 10 numbers to array ";
    for(i=0;i<10;i++)
        cin>>a[i];
    int sum=0;
    for(i=0;i<10;i++)
        sum+=a[i];
    cout<<"sum of array is "<<sum<<endl;
    return 0;
}
