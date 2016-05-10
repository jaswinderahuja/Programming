#include <iostream>
using namespace std;
 
int is_present(int *a,int n,int item){
	for(int i=0;i<n;i++){
		if(item==a[i])
		  return 1;
	}
	return 0;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
    	int n,x;
    	cin>>n>>x;
    	int a[n],min=999999;
    	int cur_sum[n+1];
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    		if(min>a[i]){
    			min = a[i];
    		}
    		cur_sum[i] = a[i];
    	}
    	for(int i=1;i<=n;i++){
    		cur_sum[i] = cur_sum[i] + cur_sum[i-1];	
    	}
    	
    	int val=x;
     	for(int i=0;i<=n;i++){
     		
     		if(val<min){
     			break;
     		}
     		
     		if(is_present(cur_sum,n+1,val)){
     			cout<<"YES"<<endl;
     			n=0;
     		}
     		
     		val = x+cur_sum[i];
     	}
     	
     	if(n!=0){
     		cout<<"NO"<<endl;
     	}
     	
    	
    	
    }
    return 0;
}