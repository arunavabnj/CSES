#include <iostream>

using namespace std;

int main()
{
 long long int b;
 cin>>b;
 long long int ar[b];
 long long n=0;
 long long m=1;

for(long long i=0;i<b;i++)
{ if(b==1)
{
    ar[i]=1;
}
else if(b==3)
{
    if(i==1)
    {
    ar[i]=b;
    }
    else
    ar[i]=m;
}
    else if(b>1 && b<3)
    {

        break;
    }
    else if(b%2==0&&i<b/2)
    {
        n=n+2;
        ar[i]=n;
    }
    else if(b%2==0&&i>=b/2)
    {

        ar[i]=m;
        m=m+2;
    }
    else if(b%2!=0&&i<=b/2)
    {

        ar[i]=m;
        m=m+2;
    }
    else if(b%2!=0&&i>b/2)
    {
        n=n+2;
        ar[i]=n;
    }
}
for(long long i=0;i<b;i++)
{  if(b>1 && b<3)
{
    cout<<"NO SOLUTION";
    break;
}
    cout<<ar[i]<<" ";
}

    return 0;
}
