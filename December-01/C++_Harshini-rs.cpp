#include <iostream>
using namespace std;
void sevenish_number(int n)
{
    int mem[100],ai=1,li=1;
    if(n==1)
    cout<<1;
    mem[1]=1;
    for(int i=2;i<=n;i++)    //bottom up approach
    {
        if(li==ai)
        {
            mem[i]=mem[li]*7;
            ai=1;
            li=i;
        }
        else
        {
            mem[i]=mem[li]+mem[ai];
            ai+=1;
        }
    }
    cout<<mem[n];
}
int main()
{
    cout<<"enter the no";
    int n;
    cin>>n;
    sevenish_number(n);
    return 0;
}
