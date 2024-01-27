#include<iostream>
using namespace std;

//public - members are accessible from outside the class. private - members cannot be accessed (or viewed) from outside the class. protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes

class Ground{
    int Rooms;
    protected:
        void put();
    public:
        void get();
};

class Middle : private Ground{
    int Labs;
    public:
        void Take();
        void Give();
};

class Top : public Middle{
    int Roof;
    public:
        void In();
        void Out();
};

//QUESTIONS

//1. Which type of inheritance is this?
//ans: Multilevel inheritance

//2. Write the names of all the members, which are directly accessible by the member function Give() of class Middle?
//ans: Member functions:put(), get(), Take(), Give() and Data members:Labs

//3. Write the names of all the members, which are directly accessible by the member function Out() of class Top?
//ans: Member functions:Take(), Give(), In(), Out() and Data members:Roof

//4. Write the names of all the members, which are directly accessible by the object T of class Top declared in main() function?
//ans: Member functions:In(), Out(), Take(), Give()
