# ifndef  TREE_H_INCLUDED
# define TREE_H_INCLUDED

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

typedef struct Tree {
    Node* root;
} Tree;

int initialize_Tree(Tree *tree);

int addLeaf(Tree* tree, int valeur);

int SearchInTree(Tree* tree, int valeur);

void InfixTree(Node* node);

void postTree(Node* node);

void prefTree(Node* node);

void deleteLeaf(Tree* tree, int valeur);

void deleteNode(Tree* tree, int valeur);

# endif // TREE_H_INCLUDED
