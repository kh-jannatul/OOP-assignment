#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,f=1;
    cout<<"enter n:";
    cin>>n;
    for(i=n;i>0;i--)
    {
        f=f*i;
    }
    cout<<"factorial is: "<<f<<endl;
    return 0;

}

