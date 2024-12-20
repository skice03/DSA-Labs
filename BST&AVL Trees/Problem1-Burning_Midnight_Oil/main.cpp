#include <iostream>
#define MINIM 0
#define MAXIM 10000000000
using namespace std;

unsigned long long suma(unsigned long long v, unsigned long long k)
{
    unsigned long long sum=0;
    unsigned long long div=1;
    while(1)
    {
        if(div>v)
            break;
        sum+= v/div;
        div*=k;
    }
    return sum;
}

unsigned long long target, k, v;

int main()
{
    cin>>target>>k;

    unsigned long long st=MINIM, dr=MAXIM, m;
    unsigned long long s, s_min=dr;

    while(st<=dr)
    {
        m=(st+dr)/2;
        s=suma(m,k);
        if(s<target)
        {
            st=m+1;
        }
        else
        {
            if(s < s_min)
            {
                s_min=s;
                v=m;
            }
            dr=m-1;
        }
    }
    cout<<v;
    return 0;
}
