#include<iostream>
using namespace std;

//Base class or Parent class
//Derived class or Child class
//Derived class inherits public and protected data members and member functions from Base class

//Single Inheritance
class A1{
    public:
    void func1(){
        cout<<"A1 Inherited"<<endl;
    }
};
class B1 : public A1{
    
};

//Multiple Inheritance
class A2{
    public:
    void func2(){
        cout<<"A2 Inherited"<<endl;
    }
};
class B2{
    public:
    void func3(){
        cout<<"B2 Inherited"<<endl;
    }
};
class C2 : public A2,public B2{

};

//Multilevel Inheritance
class A3{
    public:
    void func4(){
        cout<<"A3 Inherited"<<endl;
    }
};
class B3 : public A3{
    public:
    void func5(){
        cout<<"B3 Inherited"<<endl;
    }
};
class C3 : public B3{

};

//Hybrid Inheritance
//hybrid inheritance is combination of multiple and multilevel inheritance
//class A to class B and class B to class D, class C to class D
//thus class D will have attributes of class A, class B and class C

//Hierarchical Inheritance
//class A to class B and class C, class B to class D and class E, class C to class F and class G
//in hierarchical inheritance hierarchy is built


int main(){

    //single inheritance
    B1 b1;
    b1.func1();

    //multiple inheritance
    C2 c2;
    c2.func2();
    c2.func3();

    //multilevel inheritance
    C3 c3;
    c3.func4();
    c3.func5();

    //hybrid inheritance explained above

    //hierarchical inheritance explained above

    return 0;
}