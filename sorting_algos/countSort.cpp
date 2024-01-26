#include<iostream>
using namespace std;
#include<algorithm>

void countSort(int a[], int n){
    int* s = max_element(a,a+n);
    int count[*s+1]={0};

    for(int i=0; i<n; i++)
        count[a[i]]++;
    
    for(int j=0; j<(*s+1)-1; j++)
        count[j+1]+=count[j];

    int disp[n];
    for(int k=n-1; k>=0; k--)
        disp[--count[a[k]]] = a[k];

    for(int j=0; j<n; j++)
        a[j]=disp[j];
    return;
}

int main(){

    int arr[] = {1,3,2,3,4,1,6,4,3,5,15,0,200};
    countSort(arr,13);

    for(int i=0; i<13; i++) cout<<arr[i]<<' ';
    cout<<endl;

    return 0;
}