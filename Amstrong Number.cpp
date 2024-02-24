#include<bits/stdc++.h>
using namespace std;

void amsnum(int num)
{
    int temp,x,f=0,mul=1,sum=0;
    temp=num;
    /// for counting digit of number
    while(temp!=0)
    {
        temp/=10;
        f++;
    }
    cout<<"Digits of Number :"<<f<<endl;

    ///calculating
    temp=num;
    while(temp!=0)
    {
        x=temp%10;

        ///with Library function
        //sum=sum+pow(x,f);

        ///without Library Function
        for(int i=0; i<f; i++)
        {
            mul*=x;
        }
        sum+=mul;
        mul=1;
        temp/=10;
    }
    cout<<"Number After Calculation is: "<<sum<<endl;
    cout<<endl;
    //condition
    if(sum==num)
        cout<<"Armstrong Number"<<endl;
    else
        cout<<"NOT Armstrong Number"<<endl;
}


int main()
{
    int num;
    cout<<"Enter Any Number: ";
    cin>>num;
    amsnum(num);
    return 0;
}

