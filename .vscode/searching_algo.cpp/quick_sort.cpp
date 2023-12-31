#include<iostream>
 
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
} 

int partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i=l-1; 
    for (int j = l; i < r; i++)
    {
        if(arr[j]<pivot){
           i++;
           swap(arr, i, j);
        }
    }
    swap(arr, i+1, r);
    return i+1;
    

}

void quicksort(int arr[], int l, int r){
     int pi=partition(arr, l, r);
     quicksort(arr, l, pi-1);
     quicksort(arr,pi+1, r);

}
int main(){

int arr[7]={3, 8, 2, 9, 1, 15, 7};
// int n= sizeof(arr)/sizeof(arr[0]);

cout<<(arr, 0, 6);
for (int i = 0; i < 7; i++)
{
    /* code */
    cout<<arr[i]<<" ";
}cout<<endl;


 
 return 0;
}