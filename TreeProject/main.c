#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"

int main() {
    // Initialize the tree
    Tree* tree = (Tree*)malloc(sizeof(Tree));
    initialize_Tree(tree);

    // Add some leaves to the tree
    addLeaf(tree, 10);
    addLeaf(tree, 5);
    addLeaf(tree, 15);
    addLeaf(tree, 2);
    addLeaf(tree, 12);

    // Search for a value in the tree
    if (SearchInTree(tree, 15)) {
        printf("Value 15 found in the tree\n");
    } else {
        printf("Value 15 not found in the tree\n");
    }

    // Traverse the tree in different ways
    printf("Infix traversal: ");
    InfixTree(tree->root);
    printf("\n");

    printf("Postfix traversal: ");
    postTree(tree->root);
    printf("\n");

    printf("Prefix traversal: ");
    prefTree(tree->root);
    printf("\n");

    // Delete a leaf from the tree
    deleteLeaf(tree, 5);

    // Delete a node from the tree
    deleteNode(tree, 10);

    // Free the memory allocated for the tree
    free(tree);

    return 0;
}
