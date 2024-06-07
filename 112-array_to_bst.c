#include "binary_trees.h"

/**
 * array_to_bst - Builds a Binary Search Tree (BST) from an array
 * @array: Pointer to the first element of the array to be converted
 * @size: Number of elements in the array
 *
 * Return: Pointer to the root node of the created BST, or NULL on failure
 *         If a value of the array is already present in the tree,
 *         this value must be ignored
 */
bst_t *array_to_bst(int *array, size_t size)
{
        bst_t *root = NULL;  /* Initialize root to NULL */

        for (size_t i = 0; i < size; i++)
        {
                /* Ignore duplicates by checking if insertion returns NULL */
                if (bst_insert(&root, array[i]) == NULL)

                {
                        /* Handle potential memory allocation error here (optional) */
                }
        }
        return (root);
