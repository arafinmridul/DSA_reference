#include<iostream>
using namespace std;

/*//Stack stores a list of item in which an item can be added to or removed
from the list only at one end
//based on the LIFO mechanism (Last In First Out)
*/

/*OPERATIONS
//push(x);
//pop();
//top();
//empty();
These operations are executed in constant time means O(1);
*/

#define n 100

class stack{
    int* arr;
    int Top;
    public:
    stack(){
        arr = new int[n];
        Top = -1;
    }

    void push(int x){
        if(Top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        Top++;
        arr[Top] = x;
    }

    void pop(){
        if(Top==-1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        Top--;
    }

    int top(){
        if(Top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[Top];
    }

    bool empty(){
        return Top==-1;
    }
};


int main(){

    stack st;
    st.push(1); st.push(2); st.push(3);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop(); st.pop(); st.pop();
    cout<<st.empty()<<endl;

}