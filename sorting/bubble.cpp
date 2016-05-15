#include<iostream>
using namespace std;

void sort(int *a,int n){
    int t;
    bool flag = true;

    for(int i=0;i<n;i++){
            flag = true;
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
                flag = false;
            }
        }

        if(flag){
            break;
        }
    }


    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,n);
 return 0;
}
