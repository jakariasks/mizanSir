#include<bits/stdc++.h>
using namespace std;
void revnum(int n,int len)
{
    int rem,arr[len];
    int i=0;
    while(n!=0)
    {
        rem=n%10;
        arr[i]=rem;
        n/=10;
        i++;
    }
    for(int i=0; i<len; i++)
        cout<<arr[i];
}

int main()
{
    int num,temp,digit=0;
    cin>>num;
    temp=num;

    /// for counting digit of number
    while(temp!=0)
    {
        temp/=10;
        digit++;
    }
     cout<<digit<<endl;
    revnum(num,digit);

    return 0;
}
