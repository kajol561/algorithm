// C++ program for insertion sort  
#include <bits/stdc++.h> 
using namespace std; 
  
/* Function to sort an array using insertion sort*/
int insertionSort(int arr[], int n)  
{  
    int i, key, j, comps = -1;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
            comps++;
        }  
        comps++;
        arr[j + 1] = key;  
    } 
    return comps; 
}  
  
// A utility function to print an array of size n  
void printArray(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
}  
  
/* Driver code */
int main()  
{  
    int arr[] = { 12, 11, 13, 5, 6 };  
    int n = sizeof(arr) / sizeof(arr[0]);  
  
    int comps = insertionSort(arr, n);  
    printArray(arr, n);  
    cout << "Total # of comparisons: " << comps << endl;
  
    return 0;  
}  
