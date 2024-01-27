#include<iostream>
using namespace std;
#include<algorithm>

//an array is given of n elements that represents n positions along a straight line
//find k elements such that minimum distance between any two elements is maximum

bool isFeasible(int mid,int a[],int n,int k){
    int pos = a[0], elems = 1;
    for(int i=1; i<n; ++i){
        if(a[i] - pos >= mid){
            pos = a[i];
            elems++;
        }
        if(elems == k) return true;
    }
    return false;
}

int largestMinDist(int a[],int n,int k){
    sort(a,a+n);
    int result = -1;
    int left = 1, right = a[n-1];
    while(left < right){
        int mid = (left+right)/2;
        if(isFeasible(mid,a,n,k)){
            result = max(result,mid);
            left = mid+1;
        }
        else{
            right = mid;
        }
    }
    return result;
}

int main(){
    int n = 6;
    int a[n] = {4,2,7,11,12,1};
    int k = 3;
    cout << "largest minimum distance is " << largestMinDist(a,n,k) << endl;
}