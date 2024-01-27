#include<iostream>
using namespace std;

//Guessing the number!
//1 to 100, OJ will return "<" or ">="
//"<" means the number is smaller

int main(){
    int lo = 1, hi = 100;
    int ans = -1;

    while(lo<=hi){
        int mid = (lo+hi)/2;
        cout << mid << endl;
        cout << flush; //cout.flush(); //fflush(stdout);
        string s; cin >> s;
        if(s == "<"){
            hi = mid-1;
        }
        else{
            ans = max(ans,mid);
            lo = mid+1;
        }
    }

    cout << "! " << ans << endl;
    cout << flush;

}