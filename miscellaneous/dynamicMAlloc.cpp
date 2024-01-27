#include<iostream>
using namespace std;

int main(){
    //BASIC POINTER
    int a = 23, *ptr;
    ptr = &a;
    // cout<<*ptr<<endl;

    //NEW OPERATOR FOR DATA TYPES
    int *p = new int(47);
    // cout<<*p<<"\n";
    char *y = new char('G');
    // cout<<*y<<endl;
    int* x = new int();
    *x = 17;
    delete(x);
    cout<<*x<<endl; //x is now a dangling pointer
    //dangling pointer should be avoided, it's either should be reused or set to NULL

    //NEW OPERATOR FOR ARRAYS
    x = new int[3]; //x doesn't have to be declared as it's dangling
    x[0] = 10;
    *(x+1) = 20;
    x[2] = 30;

    //DELETE OPERATOR FOR ARRAY
    delete[] x; //memory freed
    x=NULL; //to remove the pointer

    // cout<<*arr<<endl;
    // for(int j=0; j<3; j++)
    //     cout<<x[j]<<endl;

    //IMPORTANT IMPORTANT IMPORTANT
    //2D ARRAY DYNAMIC MEMORY ALLOCATION
    int m=4, n=3, c=0;
    //declaring array with pointer to pointer
    int** arr = new int*[m];
    //declaring array inside array
    for(int i=0; i<m; i++)
        arr[i] = new int[n];
    //taking values
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            arr[i][j] = c++;
    }
    //showing values
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cout<<arr[i][j]<<" ";
        cout<<"\n";
    }
    //deleting inner arrays
    for(int i=0; i<m; i++)
        delete[] arr[i];
    //deleting outer array
    delete[] arr;
    arr = NULL;

    return 0;
}