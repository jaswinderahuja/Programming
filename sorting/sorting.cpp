#include<iostream>
#include<stdlib.h>
using namespace std;

void insertion_sort(int *a,int n){
    int t;
    for(int i=1;i<n;i++){
        int j=i-1;
        int temp = a[i];
        while(a[j] > temp && j>=0 ){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }


    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

}

void selection_sort(int *a,int n){
     int min=0;
     for(int i=0;i<n;i++){
            min = i;
            for(int j=i;j<n;j++){
                   if(a[min]> a[j]){
                        min = j;
                   }
            }

            int t = a[min];
            a[min] = a[i];
            a[i] = t;

     }

     for(int i=0;i<n;i++){
            cout<<a[i]<<endl;
        }

}

int part(int *a,int start,int n){
    int piv = a[start];
    int t = 0;
    int i = start+1;
    for(int j=start+1;j<n;j++){
        if(a[j]< piv){
             t = a[j];
            a[j] = a
            [i];
            a[i] = t;
            i++;
        }

    }

    t = a[start];
    a[start] = a[i-1];
    a[i-1] = t;

    return i-1;
}


void quicksort(int *a,int start,int n){
    if(start  < n){
        int piv_pos  = part(a,start,n);
        quicksort(a,start,piv_pos -1 );
        quicksort(a,piv_pos+1,n);
    }

}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
//    insertion_sort(a,n);
    quicksort(a,0,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
 return 0;
}
