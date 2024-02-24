#include<bits/stdc++.h>
using namespace std;
int CountOccurrences(string str, char t)
{
    int f=0;
    for(int i=0; i<str.size(); i++)
    {
        if(t==str[i])
            f++;
    }
    return f;
}
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);

    char targetchar;
    cout<<"Enter a Character to count: ";
    cin>>targetchar;

    int ans = CountOccurrences(str,targetchar);

    cout<<"Total: "<<ans<<endl;
    return 0;

}
