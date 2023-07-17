#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    int i,j,key;
    for(i=1;i<arr.size();i++)
    {
        j=i-1;
        key = arr[i];
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
}
