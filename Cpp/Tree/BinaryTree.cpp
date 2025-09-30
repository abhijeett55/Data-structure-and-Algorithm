#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

Node* createdNode(int val) {
    return new Node(val);
}


Node* insertednode() {
    int val;
    std::cout << "Enter a value: " <<"\n";
    std::cin>>val;

    if(val == -1) return nullptr;

    Node* newNode = createdNode(val);

    std::cout<<"Enter the left child: " <<"\n";
    newNode->left = insertednode();

    std::cout<<"Enter the right child: " <<"\n";
    newNode->right = insertednode(); 

    return newNode;

}

void preOreder(Node* root) {
    if(root == nullptr) return;
    std::cout<<root->data <<" ";
    preOreder(root->left);
    preOreder(root->right);
}

 



int main() {
    std::cout<<"Binary Tree" <<std::endl;
    Node* root = insertednode();

    std::cout<<"PreOrder Traversal" <<std::endl;
    preOreder(root);

    return 0;
}