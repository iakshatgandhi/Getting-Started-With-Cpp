#include <iostream>
#include <unordered_map>
#include <vector>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int item) : data(item), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    TreeNode* root;

public:
    BinaryTree() : root(nullptr) {}

    // Function to construct a binary tree from in-order and pre-order traversals
    TreeNode* buildTree(std::vector<int>& inorder, std::vector<int>& preorder) {
        std::unordered_map<int, int> inorderMap;
        for (int i = 0; i < inorder.size(); ++i) {
            inorderMap[inorder[i]] = i;
        }

        int preIndex = 0;
        return buildTreeRec(preorder, 0, inorder.size() - 1, inorderMap, preIndex);
    }

    TreeNode* buildTreeRec(std::vector<int>& preorder, int inStart, int inEnd, std::unordered_map<int, int>& inorderMap, int& preIndex) {
        if (inStart > inEnd) {
            return nullptr;
        }

        int rootValue = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootValue);

        if (inStart == inEnd) {
            return root;
        }

        int inIndex = inorderMap[rootValue];
        root->left = buildTreeRec(preorder, inStart, inIndex - 1, inorderMap, preIndex);
        root->right = buildTreeRec(preorder, inIndex + 1, inEnd, inorderMap, preIndex);

        return root;
    }

    // Function to perform in-order traversal of the constructed binary tree
    void inorderTraversal(TreeNode* node) {
        if (node != nullptr) {
            inorderTraversal(node->left);
            std::cout << node->data << " ";
            inorderTraversal(node->right);
        }
    }

    void inorderTraversal() {
        std::cout << "In-order traversal: ";
        inorderTraversal(root);
        std::cout << std::endl;
    }
};

int main() {
    std::vector<int> inorder = {9, 3, 15, 20, 7};
    std::vector<int> preorder = {3, 9, 20, 15, 7};

    BinaryTree binaryTree;
    binaryTree.root = binaryTree.buildTree(inorder, preorder);

    binaryTree.inorderTraversal();

    return 0;
}
