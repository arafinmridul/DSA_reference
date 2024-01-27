#include<iostream>
using namespace std;

//Types of Polymorphism -
//compile time polymorphism - function overloading, operator overloading
//run time polymorphism - virtual functions or function overriding

//function overloading - different functions with same name but have different number of arguments or different types of arguments
//operator overloading - overloading an operator by defining the functionality inside the class
//virtual functions or function overriding - making a function virtual by adding virtual keyword, functions with virtual keyword don't get called

//COMPILE TIME POLYMORPHISM
//function overloading
class Funct{
    public:
    void fun(){
        cout<<"function with no argument\n";
    }
    void fun(int n){
        cout<<"function with int argument\n";
    }
    void fun(double n){
        cout<<"function with double argument\n";
    }
};

//operator overloading
class Complex{
    private:
    int real,img;
    public:
    Complex(){

    } //default constructor
    Complex(int r, int i){
        real = r;
        img = i;
    } //constructor
    Complex operator + (Complex const &obj){
        Complex ans;
        ans.real = real + obj.real;
        ans.img = img + obj.img;
        return ans;
    }
    void display(){
        cout<<real<<"+i"<<img<<'\n';
    }

};

//RUNTIME POLYMORPHISM
//function overriding
class base{
    public:
    virtual void yay(){
        cout<<"YAY this base func\n";
    }
};
class derived : public base{
    public:
    void yay(){
        cout<<"LOL this derived func\n";
    }
};

int main(){

    //function overloading
    Funct m;
    m.fun(); m.fun(2); m.fun(3.1);

    //operator overloading
    Complex z1(5,2),z2(3,4);
    Complex z3 = z1+z2;
    z3.display();

    //function overriding
    // base b; derived d; b.yay(); d.yay();
    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr -> yay(); //pointer doesn't use dot(.) operator, it rather uses arrow(->) operator
    //it prints base class' function even though address of d was passed in base pointer
    //virtual keyword settles it

    return 0;
}