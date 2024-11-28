///week12-1.cpp 想了解 Linked List 的 Node
///比較之前學過的 class vs struct
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
        Cat cat1;///大寫宣告 小寫變數
        cat1.name="Kitty";
        Node node;
        node.val=1;
}///執行時 沒complie error即可
