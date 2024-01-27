#include<iostream>
using namespace std;
#include<string>

//class is a user defined datatype
//class is a blueprint which has attributes and functions
class student{
    //these are data members of a class
    //they can be accessed through dot(.) operator
    //public makes the data members usable in other functions
    //by default data members are private
    string name;
    public:
    int age;
    bool gender;

    //CONSTRUCTOR
    //when object of a class is created, constructor gets called
    //once a constructor has been created, a default constructor is needed
    student(){
        cout<<"Default Constructor"<<'\n';
    } //default constructor
    student(string s, int a, bool g){
        name = s;
        age = a;
        gender = g;
    } //parameterized constructor
    //default copy constructor performs shallow copy
    //user defined copy constructor performs deep copy
    student(student &p){
        name = p.name;
        age = p.age;
        gender = p.gender;
    } //copy constructor

    //DESTRUCTOR
    //destructor gets called when object is destroyed, end of main function
    //nothing can be parameterized and returned in destructor
    ~student(){
        cout<<"Destructor"<<'\n';
    }

    //USER DEFINED DATATYPE FUNCTIONS
    void setName(string s){
        name = s;
    }
    void printInfo(){
        cout<<name<<'\n';
        cout<<age<<'\n';
        cout<<(gender?"female":"male")<<'\n';
    }

    //OPERATOR OVERLOADING
    bool operator == (student &p){
        if(name==p.name && age==p.age && gender==p.gender)
            return true;
        return false;
    }
};

int main(){

    //student a, student b, student c are objects
    //a,b,c are distinct instances of the class
    student a;
    a.setName("Mridul");
    a.age = 22;
    a.gender = 0;
    // a.printInfo();

    //student array
    // student arr[3];
    // for(int i=0; i<3; i++){
    //     cout<<"Name: ";
    //     string s;
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout<<"Age: ";
    //     cin>>arr[i].age;
    //     cout<<"Gender(0/1): ";
    //     cin>>arr[i].gender;
    // }
    // for(int i=0; i<3; i++){
    //     arr[i].printInfo();
    // }

    //constructor application
    student b("Thomas",21,0);
    b.printInfo();

    //copy constructor
    // student c(a);
    student c = a;
    // c.printInfo();

    if(c==a) cout<<"same\n";
    else cout<<"not same\n";
    

    return 0;
}