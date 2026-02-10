#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n,int i){
   if(n==1)return;
   if(i==n-1){
    bubbleSort(arr,n-1,0);
    return;
   }

   if(arr[i]>arr[i+1]){
    swap(arr[i],arr[i+1]);
   }

   bubbleSort(arr,n,i+1);
    }


int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr,n,0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}