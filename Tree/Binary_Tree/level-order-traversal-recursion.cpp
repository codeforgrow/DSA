// level order traversal Brute force approach
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *left, *right;
};

/* Function prototypes */
void printCurrentLevel(Node *root, int level);
int height(Node *node);
Node *newNode(int data);

Node *newNode(int data)
{
  Node *temp = new Node;
  temp->data = data;
  temp->left = temp->right = NULL;
  return temp;
}

// calculate the height of tree
// traverse it level wise
// print the current level so that using recursive approach
void printLevelOrder(struct Node *root)
{
  int h = height(root);
  int i;
  for (i = 1; i <= h; i++)
  {
    printCurrentLevel(root, i);
  }
}

void printCurrentLevel(struct Node *root, int level)
{
  if (root == NULL)
    return;
  if (level == 1)
    cout << root->data << " ";
  else if (level > 1)
  {
    printCurrentLevel(root->left, level - 1);
    printCurrentLevel(root->right, level - 1);
  }
}

int height(Node *node)
{
  if (node == NULL)
    return 0;
  else
  {
    return max(height(node->left), height(node->right)) + 1;
  }
}

int main()
{
  struct Node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
  root->right->left = newNode(6);
  root->right->right = newNode(7);

  cout << "Level order traversing of binary tree \n";
  printLevelOrder(root);
  return 0;
}