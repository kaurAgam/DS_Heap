#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAXLEN 10

class heap{
    
    public:
    int arr[MAXLEN+1];
    int heapsize=0;
    int maxheapsize=MAXLEN;

    void insert(int val){

        if(heapsize==maxheapsize){
            cout<<"HEAP FULL! failed to insert!"<<endl;
            return;
        }
        //else
        heapsize++;
        arr[heapsize]=val;
        int ind=heapsize;
        int temp=0;
        for(int i=heapsize/2;i>0;i=i/2){

            if(arr[ind]>arr[i]){
                //swapping
                swap(arr[ind],arr[i]);
                ind=i;
            }
            else{
                break;
            }

        }

    }
    void display(){//root node deletion
        for(int i=1;i<=heapsize;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void delete_root(){
        if(heapsize==0){
            cout<<"EMPTY HEAP! failed to delete!"<<endl;
        }
        cout<<arr[1]<<"(root node) deleted! ";
        arr[1]=arr[heapsize];
        heapsize--;

        int i=1;
        while(i<heapsize){
            int leftind=2*i;
            int rightind=2*i+1;
            int ind=0;
            if(leftind<=heapsize && rightind<=heapsize && (arr[i]<arr[rightind] ||  arr[i]<arr[leftind])){
                if(arr[leftind]>arr[rightind]){
                    ind=leftind;
                }
                else{
                    ind=rightind;
                }
                swap(arr[ind],arr[i]);
                i=ind;
            }
            else if(leftind<=heapsize  && arr[i]<arr[leftind]){
                swap(arr[leftind],arr[i]);
                i=leftind;
            }
            else{
                return;
            }
            
        }
    }
    int isleaf(int i){
        if ( (heapsize/2 + 1)<=i && i<=heapsize){return 1;}
        else{return 0;}
    }
};

int main() {
    class heap h;

    h.insert(23);
    h.insert(45);
    h.insert(66);
    h.insert(3);
    h.insert(11);
    h.insert(97);
    h.insert(2);
    h.insert(9);
    h.insert(78);
    h.insert(56);
    h.insert(43);
    h.insert(16);
    h.insert(90);
    h.display();
    h.delete_root();
    h.display();
    h.delete_root();
    h.display();


return 0;
}

/*
OUTPUT:
HEAP FULL! failed to insert!
HEAP FULL! failed to insert!
HEAP FULL! failed to insert!
97 78 66 23 56 45 2 3 9 11
97(root node) deleted! 78 56 66 23 11 45 2 3 9
78(root node) deleted! 66 56 45 23 11 9 2 3
*/