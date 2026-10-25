#include<iostream>
using namespace std;
int linear_search(int a[],int n,int x)
{
    for(int i=0; i<n; i++)
    { 
        if(a[i]==x)
        return(i);
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

    int location=linear_search(a,n,x);
    if(location==-1)cout<<"Element not found";
    else
    cout<<"Element found at index" <<location;

    return(0);
}

//output
/*PS D:\Shreya Aher> cd "d:\Shreya Aher\" ; if ($?) { g++ linear_search.cpp -o linear_search } ; if ($?) { .\linear_search }
How many elements 10
Enter10elements 11 12 14 15 21 34 56 89 99 10
Enter element to search 21
Element found at index4*/

