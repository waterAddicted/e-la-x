#include <iostream>
using namespace std;

int main()
{
    unsigned long n,i,f; //n=pt aproximarea calcului e^x,i=contor,f=factorialul
    float s,x,p; //x=baza,s=suma,p=auxiliar care stocheaza 1,x,x^2,x^3...
    cin>>n>>x;
    f=s=p=1;
    for(i=1;i<=n;i++)
    {
        f=f*i; // actualizam factorialul
        p=p*x; //actualizam puterea
        s=s+p/f; //adun termenul i la suma
    }
    cout<<s;

}