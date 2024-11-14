///week10-2.cpp進階的class
#include <iostream>
#include <string>
using namespace std;

class Cat{
public:
    Cat(string _name){
        name=_name;
    }
    string name;
    void print(){
        cout<<"I'm a cat.My name is "<< name<<"\n";
    }
};
int main(){
    Cat cat1("小花"),cat2("小白");///cat1 cat2都是Cat

    cat1.print();
    cat2.print();

}
