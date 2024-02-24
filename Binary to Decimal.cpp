
#include<bits/stdc++.h>
using namespace std;

int BtoD(int num)
{
    int temp,x,f=0,sum=0;
    temp=num;

    ///calculating
    temp=num;
    while(temp!=0)
    {
        x=temp%10;
        int z=pow(2,f);
        sum=sum+(x*z);
        f++;
        temp/=10;
    }
    return sum;
}


int main()
{
    int num;
    cout<<"Enter Any Number: ";
    cin>>num;
    int decimal = BtoD(num);
    cout<<"Decimal of "<<num<<": "<<decimal<<endl;
    return 0;
}


