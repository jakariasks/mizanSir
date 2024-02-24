#include<bits/stdc++.h>
using namespace std;
long long int FactFun(int n)
{
    if (n==0)
        return 1;
    else
        return n* FactFun (n-1);
}
int main()
{
    int n;
    long long int fact;

    cout<<"Enter Any Number: ";
   cin>>n;

    fact= FactFun(n);

    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}

