#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    bst_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22, 98, 1, 62, 95
    };
    size_t n = sizeof(array) / sizeof(array[0]);

    tree = array_to_bst(array, n);
    if (!tree)
        return (1);
    binary_tree_print(tree);

    tree = bst_remove(tree, 79);
    printf("Removed 79...\n");
    binary_tree_print(tree);

    tree = bst_remove(tree, 21);
    printf("Removed 21...\n");
    binary_tree_print(tree);

    tree = bst_remove(tree, 68);
    printf("Removed 68...\n");
    binary_tree_print(tree);
    binary_tree_delete(tree);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 114-bst_remove.c 114-main.c 112-array_to_bst.c 111-bst_insert.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 114-bst_rm
alex@/tmp/binary_trees$ valgrind ./114-bst_rm
==14720== Memcheck, a memory error detector
==14720== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==14720== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==14720== Command: ./114-bst_rm
==14720== 
                                     .------------(079)-------.
                 .-----------------(047)-------.         .--(087)--.
       .-------(021)-------.              .--(068)     (084)     (091)-------.
  .--(002)--.         .--(032)--.       (062)                           .--(098)
(001)     (020)     (022)     (034)                                   (095)
Removed 79...
                                     .------------(084)--.
                 .-----------------(047)-------.       (087)--.
       .-------(021)-------.              .--(068)          (091)-------.
  .--(002)--.         .--(032)--.       (062)                      .--(098)
(001)     (020)     (022)     (034)                              (095)
Removed 21...
                                .------------(084)--.
                 .------------(047)-------.       (087)--.
       .-------(022)--.              .--(068)          (091)-------.
  .--(002)--.       (032)--.       (062)                      .--(098)
(001)     (020)          (034)                              (095)
Removed 68...
                                .-------(084)--.
                 .------------(047)--.       (087)--.
       .-------(022)--.            (062)          (091)-------.
  .--(002)--.       (032)--.                             .--(098)
(001)     (020)          (034)                         (095)
==14720== 
==14720== HEAP SUMMARY:
==14720==     in use at exit: 0 bytes in 0 blocks
==14720==   total heap usage: 40 allocs, 40 frees, 5,772 bytes allocated
==14720== 
==14720== All heap blocks were freed -- no leaks are possible
==14720== 
==14720== For counts of detected and suppressed errors, rerun with: -v
==14720== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
alex@/tmp/binary_trees$
