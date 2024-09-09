#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,det,x1,x2,real,im;
    cout<<"enter a,b,c:";
    cin>>a>>b>>c;

    det=b*b-4*a*c;
    if(det>0)
    {
     det=sqrt(det);
     x1=(-b+det)/(2*a);
     x2=(-b-det)/(2*a);
     cout<<"x1="<<x1<<endl;
     cout<<"x2="<<x2<<endl;
    }
    else if(det==0)
    {
        x1=x2=(-b)/(2*a);
        cout<<"x1="<<x1<<endl;
        cout<<"x2="<<x2<<endl;

    }
    else
    {
        det = sqrt(abs(det));
        real=(-b)/(2*a);
        im=det/(2*a);
        cout<<"x1="<<real<<"+"<<im<<"i"<<endl;
        cout<<"x2="<<real<<"-"<<im<<"i"<<endl;
    }
    return 0;

}
