#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cout<<"enter a character :";
    cin>>a;
    if(a=='a' || a=='e' ||a=='i' || a=='o' ||a=='u'||a=='A' || a=='E' ||a=='I' || a=='O' ||a=='U')
    {
        cout<<a<<" is an vowel"<<endl;
    }
    else
    {
        cout<<a<<" is a consonent"<<endl;
    }
    return 0;

}
