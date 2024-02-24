#include<bits/stdc++.h>
using namespace std;

void fiboseries(int a, int b, int n)
{
    int c;
    while(n--)
    {
        c = a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}
int main()
{
    int n,a=0, b=1;
    cin>>n;

    cout<<a<<" "<<b<<" ";

    fiboseries(a, b, n-2);

    return 0;
}
