#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int i,int heapsize){
    int largest=i;
    int l=2*i;
    int r=2*i+1;
    if(l<heapsize && arr[l]>arr[i]){
        largest=l;
    }
    if(r<heapsize && arr[r]>arr[largest]){
        largest=r;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,largest,heapsize);
    }       
}
void max_heapify(int arr[],int heapsize){
    int i=heapsize/2+1;
    while(i>=1){
        heapify(arr,i,heapsize);
        i--;
    }
    for(int i=1;i<=heapsize;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main() {
    int arr[50]={0,23,45,66,3,97,2,9,78,56,43,16,90};//12
    max_heapify(arr,13);
return 0;
}

// OUTPUT:
// 97 78 90 56 45 66 9 3 23 43 16 2 0 