

#include <string>
#include <iostream>
#include "bst/BinarySearchTree.h"

void runBSTTest();

void printTreeNode(string prefix, TreeNode<int> *node);

int main() {

    runBSTTest();

    return 0;
}

void printTreeNode(string prefix, TreeNode<int> *node) {
    if (node != nullptr) {
        cout << prefix << " found: " << node->element << endl;
    } else
        cout << prefix << " not found" << endl;
}

void runBSTTest() {

    auto *tree = new BinarySearchTree<int>();
//     5, 4, 3, 6, 7, 8, 9, 18, 17, 16, 15, 14

    int vals[12] = {5, 4, 3, 6, 7, 8, 9, 18, 17, 16, 15, 14};
    int i;

    for(i = 0; i < 12; i++){
        cout <<"\nInserting " << vals[i] << ":\n" << endl;
        tree->insertWithSplaying(vals[i]);
        tree->printTree();
    }

    cout <<"\nDeleting 17:\n" << endl;
    tree->removeWithSplaying(17);
    tree->printTree();

    cout << "\nFinding 45:\n" << endl;
    TreeNode<int> *node_45 = tree->findWithSplaying(45);
    cout << "\nValue from finding 45: " << node_45 << "\n" << endl;
    tree->printTree();

    cout <<"\nLargest element: " << tree->findMaxWithSplaying()->element << "\n" << endl;
    tree->printTree();

    cout <<"\nSmallest element: " << tree->findMinWithSplaying()->element << "\n" << endl;
    tree->printTree();

    delete (tree);

////////////////////////////

    auto *string_tree = new BinarySearchTree<string>();
    char alg[] = "algorithms";

    for(i = 0; i < strlen(alg); i++) {
        string s;
        s = alg[i];

        cout <<"\nInserting " << alg[i] << ":\n" << endl;
        string_tree->insertWithSplaying(s);
        string_tree->printTree();
    }

    cout <<"\nDeleting r:\n" << endl;
    string_tree->removeWithSplaying("r");
    string_tree->printTree();

    cout <<"\nDeleting m:\n" << endl;
    string_tree->removeWithSplaying("m");
    string_tree->printTree();

    cout <<"\nLargest element: " << string_tree->findMaxWithSplaying()->element << "\n" << endl;
    string_tree->printTree();

    cout <<"\nSmallest element: " << string_tree->findMinWithSplaying()->element << "\n" << endl;
    string_tree->printTree();

    delete (string_tree);
}
