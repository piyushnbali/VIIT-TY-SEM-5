#include<iostream>

using namespace std;
int partition(int arr[],int beg,int end)
{
    int pivot=arr[end];
    int i=beg-1;
    for(int j=beg;j<=end;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[end];
    arr[end]=temp;
    return i+1;
}
void quicksort(int arr[],int beg,int end)
{
    int q;
    if(beg<end)
    {
        q=partition(arr,beg,end);
        quicksort(arr,beg,q-1);
        quicksort(arr,q+1,end);
    }
}
int main()
{
    int i;  
    int arr[5]={1,2,3,4,5};
    quicksort(arr, 0, 4);
    printf("\n The sorted array is: \n");  
    for(i=0;i<5;i++)  
    printf(" %d\t", arr[i]);
    return 0;
}