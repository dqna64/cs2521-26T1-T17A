#include <stdio.h>
#include <stdlib.h>

#include "bst.h"

/**
 * Run command:
 *    $ clang bst_node_level_tut.c bst.c && ./a.out
 *
 */

int bstNodeLevel(TreeNode t, int key) {
    if (t == NULL) {
        return -1;
    }
    if (t->value == key) {
        return 0;
    } else if (t->value > key) {
        int level = bstNodeLevel(t->left, key);
        if (level == -1) { 
            return -1;
        }
        return level + 1;
    } else if (t->value < key) {
        int level = bstNodeLevel(t->right, key);
        if (level == -1) { 
            return -1;
        }
        return level + 1;
    }
}

int main(void) {
    struct node *tree = NULL;
    tree = bstInsert(tree, 7);
    tree = bstInsert(tree, 2);
    tree = bstInsert(tree, 9);
    tree = bstInsert(tree, 1);
    tree = bstInsert(tree, 5);
    tree = bstInsert(tree, 8);
    tree = bstInsert(tree, 10);
    tree = bstInsert(tree, 4);

    bstShow(tree);

    int result = bstNodeLevel(tree, 5);
    printf("level of 5: %d\n", result);  // should be 2

    int result2 = bstNodeLevel(tree, 4);
    printf("level of 4: %d\n", result2);  // should be 3

    int result3 = bstNodeLevel(tree, 7);
    printf("level of 7: %d\n", result3);  // should be 0

    int result4 = bstNodeLevel(tree, 17);
    printf("level of 17: %d\n", result4);  // should be -1
}