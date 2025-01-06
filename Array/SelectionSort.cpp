#include<iostream>
using namespace std;
int selectionSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int k=0;k<n;k++)
    {
    cout<<arr[k]<<" ";
    }

}
int main()
{
    int arr[5];
    for(int i=0;i<5;i++){
    cout<<"enter the value";
    cin>>arr[i];
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
}
