#include <iostream>
using namespace std;

int f(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i<j)
    {
        while(arr[i]<=pivot&&i<=high-1){
            i++;
        }
        while(arr[j]>pivot&&j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[low],arr[j]);
    return j;
    
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int partition = f(arr, low, high);
        quickSort(arr, low, partition-1);
        quickSort(arr, partition + 1, high);
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int arr[n];
    int low = 0;
    int high = n - 1;
    cout << "Enter the elements of an array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, low, high);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}