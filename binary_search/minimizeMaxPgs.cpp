#include<iostream>
using namespace std;
#include<climits>

//sorted array is given of n books and ith element is number of pages of ith book
//find the minimum maximum pages given to a student
//a student must have at least one book

bool isPossible(int a[],int n,int m,int mid){
    int studs = 1, sum = 0;
    for(int i=0; i<n; ++i){
        if(a[i] > mid){
            return false;
        }
        if(sum + a[i] > mid){
            studs++;
            sum = a[i];
            if(studs > m){
                return false;
            }
        }
        else{
            sum += a[i];
        }
    }
    return true;
}

int allocatePgs(int a[],int n,int m){
    if(n < m){
        return -1;
    }
    int sum = 0;
    for(int i=0; i<n; ++i){
        sum += a[i];
    }
    int start = 0, end = sum, ans = INT_MAX;
    while(start <= end){
        int mid = (start+end)/2;
        if(isPossible(a,n,m,mid)){
            ans = min(ans,mid);
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    int n = 6;
    int a[n] = {1,2,4,7,11,12};
    int m = 3;
    cout << allocatePgs(a,n,m) << endl;    
}