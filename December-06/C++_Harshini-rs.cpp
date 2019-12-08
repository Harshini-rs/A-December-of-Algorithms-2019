#include <iostream>

using namespace std;
int prime(int x)
{
    if(x==1)
        return 0;
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cout<<"enter a no";
    cin>>n;
    int a=0,b=1,i=1,c;
    cout<<"Generated fibonacci series:";
    while(i<=5)
    {
        c=a+b;
        a=b;
        b=c;
        if(prime(c)==1)
        {
        cout<<c<<" ";
        i++;
        }
    }
    return 0;
}
