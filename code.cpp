#include<iostream>
using namespace std;
void insertion_sort(int a[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            j--;
        }
    }
    cout<<"After sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter size of array :"<<endl;
    cin>>size;
    int *a = (int *)malloc(size*sizeof(int));
    int i;
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Before sorting : "<<endl;
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    insertion_sort(a,size);
}
