#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cout<<"enter a year: ";
    cin>>year;

    if((year%4==0 && year%100!=0)||(year%400==0))
    {
        cout<<"this year is leap year "<<year<<endl;
    }
    else
    {
        cout<<"this year is not a leap year "<<year<<endl;
    }
    return 0;
}
