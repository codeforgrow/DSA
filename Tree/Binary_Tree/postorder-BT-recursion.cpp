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
  temp->right = temp->left = NULL;
  return temp;
}

// post-order function
void printPostOrder(struct Node *node)
{
  if (node == NULL)
    return;
  printPostOrder(node->left);
  printPostOrder(node->right);
  cout << node->data << " ";
}

// post-order traversing Left Right Root;
int main()
{
  struct Node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);

  // for post order traversing we passes the root into the function
  printPostOrder(root);
}