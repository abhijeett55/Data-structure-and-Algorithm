#include <iostream>
#include <vector>
#include <queue>

class Node {
public:
    int data;
    Node *left, *right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Recursion 
/**

void levelOrderRecursion(Node* root, int level, std::vector<std::vector<int>>& res) {
    if(root == nullptr) return;

    if(res.size() <= level) {
        res.push_back({});
    }

    res[level].push_back(root->data);

    levelOrderRecursion(root->left, level+1, res);
    levelOrderRecursion(root->right, level+1, res);
}


std::vector<std::vector<int>> levelOrder(Node* root) {
    std::vector<std::vector<int>> res;

    levelOrderRecursion(root, 0, res);
    return res;
}
**/

//Time- O(N)
std::vector<std::vector<int>> levelOrder(Node* root) {
    if(root == nullptr) return {};
    std::queue<Node*> q;
    std::vector<std::vector<int>> res;
    q.push(root);
    int current = 0;

    while(!q.empty()) {
        int len = q.size();

        res.push_back( {} );
        for(int  i = 0; i < len; i++) {
            Node* node = q.front();
            q.pop();

            res[current].push_back(node->data);
            if(node->left!= nullptr) {
                q.push(node->left);
            }
            if(node->right != nullptr) {
                q.push(node->right);
            }

            current++;
        }
        return res;
    }

}



int main() {
    Node* root = new Node(5);
    root->left = new Node(12);
    root->right = new Node(13);

    root->left->left = new Node(7);
    root->left->right = new Node(14);

    root->right->right = new Node(2);

    root->left->left->left = new Node(17);
    root->left->left->right = new Node(23);

    root->left->right->left = new Node(27);
    root->left->right->right = new Node(3);

    root->right->right->left = new Node(8);
    root->right->right->right = new Node(11);

    std::vector<std::vector<int>> res = levelOrder(root);


    for(std::vector<int>level : res) {
        std::cout<<" [";

        for(int i = 0; i < level.size(); i++) {
            std::cout<<level[i];

            if(i <level.size() - 1)  std::cout<< " ,";
        }

        std::cout<<"] ";
    }
    std::cout<<std::endl;
}