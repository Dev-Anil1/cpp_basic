#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two number to swap ";
    cin>>a>>b;
    cout<<a<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<b;
    return 0;
}
