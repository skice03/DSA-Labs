#include <iostream>
#define MINIM 0
#define MAXIM INT_MAX
using namespace std;

long long suma(long long v, int k)
{
    long long sum=0, div=1;
    while(1)
    {
        if(div>v) break;
        sum+=v/div;
        div*=k;
    }
    return sum;
}

int main()
{
    int target, k, v, st=MINIM, dr=MAXIM;
    long long m, s, s_min=dr;
    cin>>target>>k;
    while(st<=dr)
    {
        m=(st+dr)/2;
        s=suma(m,k);
        if(s<target)
            st=++m;
        else
        {
            if(s < s_min)
            {
                s_min=s;
                v=m;
            }
            dr=--m;
        }
    }
    cout<<v;
    return 0;
}
