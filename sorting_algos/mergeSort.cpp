#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a[n1],b[n2];

    for(int i=0; i<n1; i++) a[i] = arr[l+i];
    for(int i=0; i<n2; i++) b[i] = arr[mid+1+i];

    int x=0,y=0,j=l;
    while(x<n1 && y<n2){
        if(a[x]>b[y]){
            arr[j] = b[y]; y++;
        } else{
            arr[j] = a[x]; x++;
        }
        j++;
    }
    while(x<n1){
        arr[j] = a[x]; x++; j++;
    }
    while(y<n2){
        arr[j] = b[y]; y++; j++;
    }
     return;
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
    return;
}

int main(){

    int array[] = {3,4,2,5,1};

    mergeSort(array,0,4);

    for(auto e:array) cout<<e<<" "; cout<<endl;


    return 0;
}