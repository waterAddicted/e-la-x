#include <iostream>
#include <cmath>
using namespace std;

double nr_lui_Euler(double x,double eps)
{
    double s=0;
    double t=1;
    double k=1;
    while(fabs(t)>eps)
    {
        s=s+t;
        t=t*(x/k);
        k++;
    }
    return s;
}

int main()
{
    double x;
    double eps=0.0001;
    cin>>x;
    cout<<nr_lui_Euler(x,eps);
}

//fucntia exponentiala,optimizata lesgo