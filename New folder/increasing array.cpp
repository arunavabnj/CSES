
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long arr[n];
    long long count;
    count=0;
    long long number;
    for(long long i=0;i<n;i++)
    {   cin>>arr[i];
        if(i==0)
        {
            continue;
        }
        else if(arr[i]<arr[i-1])
        {
            number=arr[i-1]-arr[i];
            count=count+number;
            arr[i]=arr[i]+number;

        }
        else continue;

    }
    cout<<count;

    return 0;
}
