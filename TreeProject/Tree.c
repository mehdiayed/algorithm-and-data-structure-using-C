#include <stdio.h>
#include "Tree.h"

int initialize_Tree(Tree *tree) {
    tree->root = NULL;
    return 0;
}

int addLeaf(Tree* tree, int valeur) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (!new_node) {
        return -1;
    }

    new_node->data = valeur;
    new_node->left = NULL;
    new_node->right = NULL;

    if (!tree->root) {
        tree->root = new_node;
        return 0;
    }

    Node *parent = NULL;
    Node *current_node = tree->root;

    while (current_node) {
        parent = current_node;

        if (valeur < current_node->data) {
            current_node = current_node->left;
        } else {
            current_node = current_node->right;
        }
    }

    if (valeur < parent->data) {
        parent->left = new_node;
    } else {
        parent->right = new_node;
    }

    return 0;
}

int SearchInTree(Tree* tree, int valeur) {
    Node *current_node = tree->root;

    while (current_node) {
        if (valeur == current_node->data) {
            return 1;
        } else if (valeur < current_node->data) {
            current_node = current_node->left;
        } else {
            current_node = current_node->right;
        }
    }

    return 0;
}

void InfixTree(Node* node) {
    if (!node) {
        return;
    }

    InfixTree(node->left);
    printf("%d", node->data);
    InfixTree(node->right);
}

void postTree(Node* node) {
    if (!node) {
        return;
    }

    postTree(node->left);
    postTree(node->right);
    printf("%d ", node->data);
}

void prefTree(Node* node) {
    if (!node) {
        return;
    }

    printf("%d ", node->data);
    prefTree(node->left);
    prefTree(node->right);
}

void deleteLeaf(Tree* tree, int valeur) {
    Node *parent = NULL;
    Node *current_node = tree->root;

    while (current_node) {
        if (valeur == current_node->data) {
            if (!current_node->left && !current_node->right) {
                if (current_node == parent->left) {
                    parent->left = NULL;
                } else {
                    parent->right = NULL;
                }

                free(current_node);
                return;
            }
        }

        parent = current_node;

        if (valeur < current_node->data) {
            current_node = current_node->left;
        } else {
            current_node = current_node->right;
        }
    }
}

void deleteNode(Tree* tree, int valeur) {
  Node *node = findNode(tree, valeur);
  if (!node) {
    return;
  }

  if (!node->left && !node->right) {
    // Node is a leaf
    if (node == tree->root) {
      tree->root = NULL;
    } else {
      if (node == node->parent->left) {
        node->parent->left = NULL;
      } else {
        node->parent->right = NULL;
      }
    }
    free(node);
  } else if (node->left && !node->right) {
    // Node has only a left child
    node->left->parent = node->parent;
    if (node == tree->root) {
      tree->root = node->left;
    } else {
      if (node == node->parent->left) {
        node->parent->left = node->left;
      } else {
        node->parent->right = node->left;
      }
    }
    free(node);
  } else if (!node->left && node->right) {
    // Node has only a right child
    node->right->parent = node->parent;
    if (node == tree->root) {
      tree->root = node->right;
    } else {
      if (node == node->parent->left) {
        node->parent->left = node->right;
      } else {
        node->parent->right = node->right;
      }
    }
    free(node);
  } else {
    // Node has two children
    Node *successor = findSuccessor(node);
    node->data = successor->data;
    deleteNode(tree, successor->data);
  }
}