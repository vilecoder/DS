#include <iostream>
using namespace std;
int binarysearch(int a[],int target_value,int size){
    
    int start=0;
    int end=size-1,mid;
    
    while(start<=end){
         mid=(start+end)/2;
        if (target_value==a[mid])
        {
            return mid;
        }
        else if (target_value>a[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        
    }
    return -1;
}
int main(){
    int a[]={1,2,3,4,6};
    cout<<"target value index is:"<<binarysearch(a,6,5)<<endl;
    
    
}