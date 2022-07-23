#include <iostream>
using namespace std;

int main()
{
    cout<<"Insertion sort\n";
    int n,i,j;
    cout<<"Enter n::";
    cin>>n;
    cout<<"Enter the aray elements::";
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // Insertion Sort starts here
    for(i=1;i<n;i++)
    {
        int curr=arr[i];
        int j=i-1;
        while(arr[j]>curr && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
    cout<<"The sorted elements are::\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
