#include <iostream>
using namespace std;

struct Node
{
    int data;       
    Node *left;     
    Node *right;    
};

class BinaryTree
{
public:
    Node *root;  

    BinaryTree()
    {
        root = NULL;
    }

    Node* createTree()
    {
        int value;

        cout << "\nEnter node value (-1 for No Node): ";
        cin >> value;

        if(value == -1)
            return NULL;

        Node *newNode = new Node;
        newNode->data = value;

        cout << "Enter Left Child of " << value;
        newNode->left = createTree();

        cout << "Enter Right Child of " << value;
        newNode->right = createTree();

        return newNode;
    }

    void buildTree()
    {
        cout << "\nCreate Binary Tree\n";
        root = createTree();
    }

    void inorder(Node *temp)
    {
        if(temp == NULL)
            return;

        inorder(temp->left);
        cout << temp->data << " ";
        inorder(temp->right);
    }

    void preorder(Node *temp)
    {
        if(temp == NULL)
            return;

        cout << temp->data << " ";
        preorder(temp->left);
        preorder(temp->right);
    }

    void postorder(Node *temp)
    {
        if(temp == NULL)
            return;

        postorder(temp->left);
        postorder(temp->right);
        cout << temp->data << " ";
    }

    void displayInorder()
    {
        cout << "\nInorder Traversal : ";
        inorder(root);
        cout << endl;
    }

    void displayPreorder()
    {
        cout << "\nPreorder Traversal : ";
        preorder(root);
        cout << endl;
    }

    void displayPostorder()
    {
        cout << "\nPostorder Traversal : ";
        postorder(root);
        cout << endl;
    }
};

int main()
{
    BinaryTree tree;
    int choice;

    do
    {
        cout << "\n================================";
        cout << "\n        BINARY TREE MENU        ";
        cout << "\n================================";

        cout << "\n1. Create Binary Tree";
        cout << "\n2. Inorder Traversal";
        cout << "\n3. Preorder Traversal";
        cout << "\n4. Postorder Traversal";
        cout << "\n5. Exit";

        cout << "\nEnter Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                tree.buildTree();
                break;

            case 2:
                tree.displayInorder();
                break;

            case 3:
                tree.displayPreorder();
                break;

            case 4:
                tree.displayPostorder();
                break;

            case 5:
                cout << "\nProgram Ended Successfully.\n";
                break;

            default:
                cout << "\nInvalid Choice.\n";
        }

    } while(choice != 5);

    return 0;
}

/*
OUTPUT :

================================
        BINARY TREE MENU        
================================
1. Create Binary Tree
2. Inorder Traversal
3. Preorder Traversal
4. Postorder Traversal
5. Exit
Enter Choice : 1

Create Binary Tree

Enter node value (-1 for No Node): 10
Enter Left Child of 10
Enter node value (-1 for No Node): 20
Enter Left Child of 20
Enter node value (-1 for No Node): -1
Enter Right Child of 20
Enter node value (-1 for No Node): -1
Enter Right Child of 10
Enter node value (-1 for No Node): 30
Enter Left Child of 30
Enter node value (-1 for No Node): 40
Enter Left Child of 40
Enter node value (-1 for No Node): 50
Enter Left Child of 50
Enter node value (-1 for No Node): -1
Enter Right Child of 50
Enter node value (-1 for No Node): -1
Enter Right Child of 40
Enter node value (-1 for No Node): -1
Enter Right Child of 30
Enter node value (-1 for No Node): -1

================================
        BINARY TREE MENU        
================================
1. Create Binary Tree
2. Inorder Traversal
3. Preorder Traversal
4. Postorder Traversal
5. Exit
Enter Choice : 2

Inorder Traversal : 20 10 50 40 30 

================================
        BINARY TREE MENU        
================================
1. Create Binary Tree
2. Inorder Traversal
3. Preorder Traversal
4. Postorder Traversal
5. Exit
Enter Choice : 3

Preorder Traversal : 10 20 30 40 50 

================================
        BINARY TREE MENU        
================================
1. Create Binary Tree
2. Inorder Traversal
3. Preorder Traversal
4. Postorder Traversal
5. Exit
Enter Choice : 4

Postorder Traversal : 20 50 40 30 10 

================================
        BINARY TREE MENU        
================================
1. Create Binary Tree
2. Inorder Traversal
3. Preorder Traversal
4. Postorder Traversal
5. Exit
Enter Choice : 5

Program Ended Successfully.
*/
