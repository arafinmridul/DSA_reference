#include<iostream>
using namespace std;
#include<string>
#include<stack>

//LIFO - Last In First Out

void reverseSentence(string s){
    stack<string>st;
    string temp = "";
    for(int i=0; i<s.size(); ++i){
        if(i==s.size()-1){
            temp+=s[i];
            st.push(temp);
        }
        else if(s[i]==' '){
            st.push(temp);
            temp = "";
        }
        else temp+=s[i];
    }
    while(!st.empty()){
        cout<<st.top()<<' ';
        st.pop();
    } cout<<endl;
}

int main(){

    string s = "Hey, how are you doing?";
    reverseSentence(s);

}