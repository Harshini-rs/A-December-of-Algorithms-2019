#include <iostream>
using namespace std;
int main()
{
    cout<<"enter the no";
    int num,r,n=0,s1=0,s2=0,rev=0;
    cin>>num;
    int num1=num;
    while(num>0)
    {
        r=(num%10);
        rev=(rev*10)+r;
        num=num/10;
        n++;
    }
    num=rev;
    int i=0;
    if(num%2!=0)
    {
        n=n/2;
    while(num>0)
    {
        int x=(num%10)*2;
            if(x>9)
            {
                while(x>0)
                {
                s2+=x%10;
                x=x/10;
                cout<<s2<<" ";
                }
            }
            else
            {
                s2+=x;
                cout<<s2<<" ";
            }
        num=num/100;
    }
    }
    while(rev>0)
    {
        if(n%2==0)
        {
            n=n/10;
        }
        s1+=rev%10;
        rev=rev/100;
    }
    if((s1+s2)%10==0)
    cout<<"\n"<<num1<<" passes the test";
    else
    cout<<"\n"<<num1<<" does not pass the test";
    return 0;
}



