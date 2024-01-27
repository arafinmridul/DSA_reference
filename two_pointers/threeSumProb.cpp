#include<iostream>
#include<algorithm>
using namespace std;

//Finding out if the target value is sum of any three elements in the given array

/*Input :
6,24
12 3 7 1 6 9
Output :
True(12,3,9)
*/
/*Input :
6,5
12 3 7 1 6 9
Output :
False
*/

//Brute force approach has O(n3) time complexity
//This can be reduced to O(n2) by two pointer method

//TWO POINTER TECHNIQUE
/*1.Sort the array
//2.Traverse the array and fix the first element of the triplet, the problem reduces to
find if there exist two elements having the sum equal to (target-first element).
//The problem has reduced to Two Sum problem
*/

int main(){
    int a[6] = {12,3,7,1,6,9};
    // int target = 5;
    int target = 24;
    // int target = 16;

    sort(a,a+6);
    int i,j,X;
    for(int it=0; it<6; ++it){
        i=it+1; j=6;
        X = target-a[it];
        while(i<j){
            if(a[i]+a[j]==X){
                cout<<"TRUE\n"<<a[it]<<' '<<a[i]<<' '<<a[j]<<endl;
                goto tf;
            }
            if(a[i]+a[j]<X) i++;
            if(a[i]+a[j]>X) j--;
        }
    }
    cout<<"FALSE\n"; tf:;

    return 0;
}