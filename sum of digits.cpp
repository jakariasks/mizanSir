#include<bits/stdc++.h>
using namespace std;

int DigitSum(int arr[], int N)
{
    int sum;

    if(N<=0)
        return 0;
    else
    {
        sum = arr[N-1] + DigitSum(arr, N-1);
    }
    return sum;
}
int main()
{   int num,temp,rem;
    cin>>num;
    temp=num;
    int arr[ 100],N, i=0;
    while(temp!=0)
    {
        rem=temp%10;
        arr[i]=rem;
        i++;
        temp/=10;
    }

    int sum= DigitSum(arr, i+1);
    cout<<endl<<"Sum of Digits is :"<<sum<<endl;
    return 0;
}

