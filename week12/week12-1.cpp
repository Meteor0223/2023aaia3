///week12-1.cpp �Q�F�� Linked List �� Node
///������e�ǹL�� class vs struct
#include <iostream>
using namespace std;
///struct Node {};
///class Cat {};
struct Node {
    int val;
};
class Cat{
public:
    string name;
};
int main(){
        Cat cat1;///�j�g�ŧi �p�g�ܼ�
        cat1.name="Kitty";
        Node node;
        node.val=1;
}///����� �Scomplie error�Y�i
