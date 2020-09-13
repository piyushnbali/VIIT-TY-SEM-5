#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& arr,int alt,int end)
{
    int pivot=arr[end];
    int i=alt-1;
    for(int j=alt;j<=end;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[end];
    arr[end]=temp;
    return i+1;
}
void quicksort(vector<int>& arr,int alt,int end)
{
    int q;
    if(alt<end)
    {
        q=partition(arr,alt,end);
        quicksort(arr,alt,q-1);
        quicksort(arr,q+1,end);
    }
}
int main()
{
    int size;  
    vector<int> arr;
    cout<<"Enter the size of the array\n";
    cin>>size;
    arr.resize(size);
    cout<<"Enter the elements in the array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr, 0, size-1);
    cout<<"\nThe sorted array is: \n";  
    for(int i=0;i<size;i++) 
    { 
        cout<<arr[i]<<" ";
    }
    return 0;
}