#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

int main(){

    //including string header file
    //string keyword and identifier
    // string str;
    // cin>>str;
    // cout<<str;
    // string str = "ThomasShelby";
    // string str1(5, 'n');

    // cout<<str<<endl;
    // cout<<str1<<endl;

    //--TO TAKE INPUT WITH SPACES--//
    string str;
    // getline(cin, str); //getline() function

    // cout<<str<<endl;

    //--STRING FUNCTIONS--//
    string s1 = "fam";
    string s2 = "ily";
    // cout<<s1+s2<<endl;

    // s1 = s1+s2;
    // cout<<s1<<endl;

    //APPENDING
    s1.append(s2); //append() function
    // cout<<s1<<endl;

    //INDEXING
    // cout<<s1[1]<<endl;

    //CLEARING
    string abc = "My name is mridul";
    // abc.clear(); //clear() function
    // cout<<abc<<endl;

    //COMPARING
    string x1 = "abc";
    string x2 = "xyz";

    // if(!x1.compare(x2))
    // if(x1.compare(x2)==0)
        // cout<<"Strings are equal"<<endl;
    // else
        // cout<<"Are not equal"<<endl;

    // cout<<x2.compare(x1)<<endl; //compare function

    //CLEARING
    string a1 = "abc";
    // cout<<a1<<endl;
    a1.clear();

    //EMPTY function
    // if(a1.empty())
    //     cout<<"String is empty"<<endl;
    // else
    //     cout<<"Not empty"<<endl;

    //ERASING
    string a2 = "nincompoop";
    // a2.erase(2, 3); //erase function
    // cout<<a2<<endl;

    //FINDING
    // cout<<a2.find("poo")<<endl; //find() function

    //INSERTING
    // a2.insert(2, "lol"); //insert() function
    // cout<<a2<<endl;

    //LENGTH or SIZE
    // cout<<a2.size()<<endl; //size() function
    // cout<<a2.length()<<endl; //length() function

    // for(int i=0; i<a2.length(); i++)
    //     cout<<a2[i]<<endl;

    //SUBSTRING
    string b1 = "nincompoop";
    string b2 = b1.substr(3, 4); //substr() function
    // cout<<b2<<endl;

    //STRING 2 INTEGER
    string b3 = "769";
    int x = stoi(b3); //stoi() function
    // cout<<x+2<<endl;

    //TO STRING
    int z = 465;
    cout<<to_string(z) + "2"<<endl; //to_string() function

    //--SORTING A STRING--//
    string newStr = "ohmywhatislife";

    //including algorithm header file
    sort(newStr.begin(), newStr.end()); //sort() function

    cout<<newStr<<endl;


    return 0;
}