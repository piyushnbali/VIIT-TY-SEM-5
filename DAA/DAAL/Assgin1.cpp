/*Algorithm


1.Take the input arr[] from user.
2.Take element you want to search in the array from the user.
3.Set flag variable as 0.
4.Loop: arr[start]->arr[end]
5.If match found then print match is found and set flag=1 and abort the loop.
6.After loop check variable flag. If flag==0 then print no match is found.
7.STOP


Time Complexity:	O(N)

Space Complexity: O(N)

N  is the size of the array.*/


#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Welcome....\n\n";
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    vector<int> arr(n,0);
    for(int i=1;i<n+1;i++)
    {
        cout<<"Enter "<<i<<"th"<<" Value\n";
        cin>>arr[i-1];
    }
    int x;
    cout<<"Element To be searched\n";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
           { cout<<"Element Found at "<<i+1<<"\n"; return 0;}

    }
    cout<<"Element not Found\n";
    
}