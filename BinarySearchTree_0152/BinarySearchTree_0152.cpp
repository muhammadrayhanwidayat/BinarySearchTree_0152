#include <iostream>
using namespace std;

//membuat class node

//membuat class node
class Node {

    //memberi akses modifier serta mendeklarasi variabel dan object node
public:
    string info;
    Node* leftChild;
    Node* rightChild;


    //membuat constructor untuk class node
    Node(string i, Node* l, Node& r) {

    }

};


//membuat class BinarTree
class BinaryTree {

    //memberi akses modifier dan deklarasi object
public:
    Node* ROOT;

    //membuat constructor dan memberi nilai kepada object root
    BinaryTree() {
        ROOT = nullptr;
    }

    //membuat prosedur insert
    void insert(string element) {

    }

};

 int main() {


 }