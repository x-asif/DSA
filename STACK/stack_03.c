#include <stdio.h>
#include <stdlib.h>

// Node structure for Binary Search Tree
typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

// Function to create a new node
Node* createNode(int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Recursive function to insert a node in BST
Node* insertRecursive(Node *root, int value) {
    // Base case: if tree is empty, create new node
    if (root == NULL) {
        return createNode(value);
    }
    
    // Recursive case: traverse left or right subtree
    if (value < root->data) {
        root->left = insertRecursive(root->left, value);
    } else if (value > root->data) {
        root->right = insertRecursive(root->right, value);
    }
    // If value == root->data, ignore duplicates
    
    return root;
}

// Recursive function to search in BST
int searchRecursive(Node *root, int value) {
    // Base case: tree is empty
    if (root == NULL) {
        return 0;  // Element not found
    }
    
    // Base case: element found
    if (root->data == value) {
        return 1;  // Element found
    }
    
    // Recursive case: search in left or right subtree
    if (value < root->data) {
        return searchRecursive(root->left, value);
    } else {
        return searchRecursive(root->right, value);
    }
}

// Recursive function to find minimum value in BST
Node* findMinNode(Node *root) {
    if (root == NULL) {
        return NULL;
    }
    
    // Minimum value is at leftmost node
    if (root->left == NULL) {
        return root;
    }
    
    return findMinNode(root->left);
}

// Recursive function to delete a node from BST
Node* deleteRecursive(Node *root, int value) {
    if (root == NULL) {
        return NULL;
    }
    
    // Traverse left or right based on value
    if (value < root->data) {
        root->left = deleteRecursive(root->left, value);
    } else if (value > root->data) {
        root->right = deleteRecursive(root->right, value);
    } else {
        // Node to delete found
        
        // Case 1: Node has no children (leaf node)
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }
        
        // Case 2: Node has one child
        if (root->left == NULL) {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        if (root->right == NULL) {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        
        // Case 3: Node has two children
        // Find inorder successor (smallest in right subtree)
        Node *successor = findMinNode(root->right);
        root->data = successor->data;
        root->right = deleteRecursive(root->right, successor->data);
    }
    
    return root;
}

// Recursive Inorder Traversal (Left, Root, Right)
void inorderRecursive(Node *root) {
    if (root == NULL) {
        return;
    }
    
    inorderRecursive(root->left);
    printf("%d ", root->data);
    inorderRecursive(root->right);
}

// Recursive Preorder Traversal (Root, Left, Right)
void preorderRecursive(Node *root) {
    if (root == NULL) {
        return;
    }
    
    printf("%d ", root->data);
    preorderRecursive(root->left);
    preorderRecursive(root->right);
}

// Recursive Postorder Traversal (Left, Right, Root)
void postorderRecursive(Node *root) {
    if (root == NULL) {
        return;
    }
    
    postorderRecursive(root->left);
    postorderRecursive(root->right);
    printf("%d ", root->data);
}

// Recursive function to calculate height of BST
int heightRecursive(Node *root) {
    if (root == NULL) {
        return -1;  // Height of empty tree is -1
    }
    
    int leftHeight = heightRecursive(root->left);
    int rightHeight = heightRecursive(root->right);
    
    return 1 + ((leftHeight > rightHeight) ? leftHeight : rightHeight);
}

// Recursive function to count total nodes
int countNodesRecursive(Node *root) {
    if (root == NULL) {
        return 0;
    }
    
    return 1 + countNodesRecursive(root->left) + countNodesRecursive(root->right);
}

// Main function
int main() {
    Node *root = NULL;
    
    printf("=== Binary Search Tree - Recursive Operations ===\n\n");
    
    // Insert nodes recursively
    printf("Inserting values: 50, 30, 70, 20, 40, 60, 80\n");
    root = insertRecursive(root, 50);
    root = insertRecursive(root, 30);
    root = insertRecursive(root, 70);
    root = insertRecursive(root, 20);
    root = insertRecursive(root, 40);
    root = insertRecursive(root, 60);
    root = insertRecursive(root, 80);
    printf("Insertion complete!\n\n");
    
    // Display tree traversals
    printf("Inorder Traversal (Left-Root-Right): ");
    inorderRecursive(root);
    printf("\n");
    
    printf("Preorder Traversal (Root-Left-Right): ");
    preorderRecursive(root);
    printf("\n");
    
    printf("Postorder Traversal (Left-Right-Root): ");
    postorderRecursive(root);
    printf("\n\n");
    
    // Search operations
    printf("Search Operations:\n");
    printf("Search 40: %s\n", searchRecursive(root, 40) ? "Found" : "Not Found");
    printf("Search 100: %s\n", searchRecursive(root, 100) ? "Found" : "Not Found");
    printf("Search 20: %s\n\n", searchRecursive(root, 20) ? "Found" : "Not Found");
    
    // Tree statistics
    printf("Tree Statistics:\n");
    printf("Total nodes: %d\n", countNodesRecursive(root));
    printf("Height of tree: %d\n\n", heightRecursive(root));
    
    // Delete operations
    printf("Deleting node 20 (leaf node)\n");
    root = deleteRecursive(root, 20);
    printf("Inorder after deletion: ");
    inorderRecursive(root);
    printf("\n\n");
    
    printf("Deleting node 30 (node with one child)\n");
    root = deleteRecursive(root, 30);
    printf("Inorder after deletion: ");
    inorderRecursive(root);
    printf("\n\n");
    
    printf("Deleting node 50 (node with two children)\n");
    root = deleteRecursive(root, 50);
    printf("Inorder after deletion: ");
    inorderRecursive(root);
    printf("\n\n");
    
    printf("Final tree statistics:\n");
    printf("Total nodes: %d\n", countNodesRecursive(root));
    printf("Height of tree: %d\n", heightRecursive(root));
    
    return 0;
}
