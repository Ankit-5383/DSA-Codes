#include <iostream>

using namespace std;

int main()
{
    int arr[6];
    // int reverse[6];
    cout<<"enter the num";
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    int start=0;
    int end=arr.size()-1;

   while(start<end)
   {
      swap(arr[start],arr[end]);
      start++;
      end--;
   }
   for(int i=0;i<=arr.size();i++)
   {
    cout<<arr[i]<<" ";
   }
   
}
