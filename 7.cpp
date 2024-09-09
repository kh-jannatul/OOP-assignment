#include<bits/stdc++.h>>
using namespace std;
int main()
{
    int number1,number2,number3,largest;
    cout<<"entter 3 numbers: ";
    cin>>number1>>number2>>number3;


    if(number1 >= number2 &&number1 >= number3)
    {
        largest =number1;
    }
    else if(number2 >= number3 &&number2 >= number1)
    {
        largest =number2;
    }
    else
    {
        largest =number3;
    }
    cout<<"largest number is: "<<largest<<endl;

    return 0;
}

