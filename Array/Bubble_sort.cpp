#include<iostream>
using namespace std;

int BubbleSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
            swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int k=0;k<n;k++)
    cout<<arr[k]<<"  ";

}
int main()
{
  int arr[5];
    for(int i=0;i<5;i++){
    cout<<"enter the value";
    cin>>arr[i];
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    BubbleSort(arr,n);
}
