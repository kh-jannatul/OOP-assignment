#include<bits/stdc++.h>
using namespace std;
int main()
{
  int devisor,devidend,quotient,remainder;
  cout<<"enter devisor:";
  cin>>devisor;

  cout<<"enter devidend:";
  cin>>devidend;

  quotient=devisor/devidend;
  remainder=devisor%devidend;

  cout<<"quotient="<<quotient<<endl;
  cout<<"remainder="<<remainder<<endl;
  return 0;
}
