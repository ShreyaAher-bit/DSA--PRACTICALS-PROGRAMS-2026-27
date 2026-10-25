#include<iostream>
using namespace std;

int binary_search(int a[],int n,int x)
{
    int first=0, last=n-1,mid;
    while(first<=last)
    {
        mid = (first+last)/2;

        if(a[mid]==x) return(mid);
        else if (a[mid]<x) first=mid+1;

        else last = mid-1;
    }
    return(-1);
}

int main()
{
    int a[20];
    int n;
    cout<<"How many elements";
    cin>>n;
    cout<<"Enter"<<n<<"elements";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"Enter element to search";
    cin>>x;

    int location=binary_search(a,n,x);
    if(location==-1)cout<<"Element not found";
    else
    cout<<"Element found at index" <<location;

    return(0);
}
//Output
/*PS C:\DSA codes> g++ binary_search.cpp -o program
PS C:\DSA codes> .\program.exe
How many elements10
Enter10elements 11 22 33 44 55 66 77 88 99 10
Enter element to search55
Element found at index4
PS C:\DSA codes> */
