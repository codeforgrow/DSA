#include <iostream>
using namespace std;

struct Node
{
  int data;
  struct Node *left;
  struct Node *right;
};

Node *newNode(int data)
{
  Node *temp = new Node;
  temp->data = data;
  temp->left = temp->right = NULL;
}

void printInOrder(struct Node *node)
{
  if (node == NULL)
    return;
  printInOrder(node->left);
  cout << node->data << " ";
  printInOrder(node->right);
}

int main()
{
  struct Node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);

  // InOrder Traversing;
  printInOrder(root);
  return 0;
}