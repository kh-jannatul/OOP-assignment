#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter positive number: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"sum of numbers: "<<sum<<endl;
    return 0;

}
