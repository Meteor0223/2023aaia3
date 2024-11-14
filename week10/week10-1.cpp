///week10-1.cpp要教 類別 class
#include <iostream>
using namespace std;
///你在寫class Cat {寫完大括號，他會補完 };
class Cat{
public:
    void print(){
        cout<<"I'm a cat.meow meow\n";
    }
};
class Mouse{
public:
    void print(){
        cout<<"I'm a mouse.chi chi\n";
    }
};
int main(){
    Cat cat1,cat2;///cat1 cat2都是Cat
    cat1.print();
    cat2.print();
    Mouse mouse1,mouse2;
    mouse1.print();
    mouse2.print();
}
