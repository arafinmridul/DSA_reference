#include<iostream>
using namespace std;
#include<set>
#include<unordered_set>

//TYPES OF SET - ORDERED SET, UNORDERED SET

//ORDERED SET -
//contains unique elements //implemented using balanced BST
//elements are in sorted order //set header file
//random access is not possible (i.e.cannot get i'th element in O(1)/O(LogN))
//MULTISET -
//can contain duplicate elements
//all other things are as same as ordered set
//time complexity -
//insertion,deletion,upper/lower_bound() O(LogN)

//UNORDERED SET -
//contains unique elements //implemented using hashing
//elements are not in sorted order //unordered_set header file
//random access is not possible (i.e.cannot get i'th element in O(1)/O(LogN))
//time complexity -
//insertion,deletion O(1)avg case and O(N) in worst case
//upper/lower_bound() N/A


int main(){

    //INITIALIZING AND INSERTING
    set<int>s;
    s.insert(2); s.insert(0);
    s.insert(2); s.insert(3);

    //PRINTING ELEMENTS
    for(auto i:s) cout<<i<<' '; cout<<endl;
    for(auto i=s.begin(); i!=s.end(); ++i) cout<<*i<<' '; cout<<endl;
    //here i is working as an iterator

    //PRINTING ELEMENTS IN REVERSE ORDER
    for(auto i=s.rbegin(); i!=s.rend(); ++i) cout<<*i<<' '; cout<<endl;

    //SIZE OF THE SET
    cout<<s.size()<<endl;

    //SET CUSTOM COMPARATOR
    set<int,greater<int>>s2; //will be sorted in descending order
    s2.insert(1); s2.insert(9);
    s2.insert(9); s2.insert(8);
    for(auto i=s2.begin(); i!=s2.end(); ++i) cout<<*i<<' '; cout<<endl;

    //LOWER/UPPER_BOUND()
    set<int>s3;
    s3.insert(1); s3.insert(3); s3.insert(5);
    cout<<*s3.lower_bound(2)<<'\n'; //lower_bound() is not less than
    cout<<*s3.lower_bound(3)<<'\n';
    cout<<*s3.upper_bound(3)<<'\n'; //upper_bound() is first greater than
    cout<<(s3.upper_bound(5)==s3.end())<<'\n'; //if true prints 1 else prints 0

    //ERASING
    set<char>s4;
    s4.insert('m'); s4.insert('r');
    s4.insert('i'); s4.insert('d');
    s4.insert('u'); s4.insert('l');
    s4.erase('u');
    s4.erase(s4.begin());
    for(auto it=s4.begin(); it!=s4.end(); ++it) cout<<*it<<' '; cout<<endl;

    //MULTISET
    multiset<int>m;
    m.insert(3); m.insert(5); m.insert(9);
    m.insert(5); m.insert(3); m.insert(5);
    m.insert(2); m.insert(3); m.insert(7);
    m.erase(3); //erases all instances of 3
    m.erase(m.find(5)); //erases the first element that matches
    //find(),lower/upper_bound() are useful in this case
    for(auto i:m) cout<<i<<' '; cout<<endl;

    //UNORDERED SET
    unordered_set<int>u;
    u.insert(4); u.insert(6); u.insert(3);
    u.insert(5); u.insert(3); u.insert(6);
    for(auto e:u) cout<<e<<' '; cout<<endl;


    return 0;
}