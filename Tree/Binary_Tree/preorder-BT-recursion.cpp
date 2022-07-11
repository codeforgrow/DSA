#include <iostream>
using namespace std;

struct Node
{
  int data;
  struct Node *left;
  struct Node *right;
};

// creating a new node;
Node *newNode(int data)
{
  Node *temp = new Node;
  temp->data = data;
  temp->left = temp->right = NULL;
  return temp;
}

void printPreOrder(struct Node *node)
{
  if (node == NULL)
    return;
  cout << node->data << " ";
  printPreOrder(node->left);
  printPreOrder(node->right);
}

// preorder means root, left, right
int main()
{
  struct Node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
  cout << "Print PredOrder traversal of binary tree: \n";
  printPreOrder(root);
  return 0;
}