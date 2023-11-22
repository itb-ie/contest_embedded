#include <stdio.h>
#include "tree.h"

t_node* generate(int n) {
    t_node *root = NULL;
    int i = 1;
    while (i <= n) {
        root = insert_avl(root, i);
        i++;
    }
    display_tree(root, NULL, 0);
    return root;
}


int main() {
    return 0;
}
