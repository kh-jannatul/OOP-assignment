#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter n:";
    cin>>n;
    for(i=n;i>0;i--)
    {
        sum=sum+i;
    }
    cout<<"sum is: "<<sum<<endl;
    return 0;

}
