#include<bits/stdc++.h>
using namespace std;
int SumofDigit(int n)
{
    int rem,sum=0;
    while(n!=0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    return sum;
}

int main()
{
    int num;
    cout<<"Enter any Number: ";
    cin>>num;

    int sum= SumofDigit(num);
    cout<<endl<<"Sum Of Digit = ";
    cout<<sum<<endl;
    return 0;
}

