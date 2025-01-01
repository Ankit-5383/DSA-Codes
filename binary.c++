#include<iostream>
using namespace std;

int BinarySort(int arr[],int n,int target)
{
    int start=0;
    int end=n-1;
    
    
    while(start<=end)
    {
        int mid=(start+end)/ 2;
        
        if(arr[mid]==target){
          return mid;
        }
        else if(arr[mid]>target){
             end=mid-1;
           // start=mid+1;
        }
        else if(arr[mid]<target){
          // end=mid-1;
           start=mid+1;
        }

        return -1;
        
        
    }
}




int main()
{
    int result;
    int target;
    int n;
    cout<<"enetr the sixe of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cout<<"enter the elements of arr: ";
    cin>>arr[i];
    }

    cout<<"enter the target element: ";
    cin>>target;

    result= BinarySort(arr,n,target);
  
  if (result != -1) {
        cout << "The index of the target element is: " << result;
    } else {
        cout << "Target element not found!";
    }


  

}