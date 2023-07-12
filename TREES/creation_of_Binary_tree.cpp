#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;
    
    //constructor
    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

//creation of the binary tree
Node* buildTree(Node* root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;

    root = new Node(data);

    //agar user data -1 deta hai ...toh iska matlab wo NULL hai.....
    if(data==-1)
    {
        return NULL;
    }

    //recursive call for the left part
    cout << "Enter the data for inserting in the left of " << data << endl;
    root -> left  =buildTree(root->left );

    //recursive call for the right part
    cout << "Enter the data for inserting in the right of " << data << endl;
    root -> right = buildTree(root->right);

    //at last we have to return the root
    return root;
}

//level order traversal
vector<vector<int>>levelOrderTraversal(Node * root)
{
    vector<vector<int>>ans;
    //firstly we have to declare a queue
    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        int size=q.size();
        vector<int>level;
        for(int i=0;i<size;i++)
        {
            Node* temp=q.front();
            q.pop();
            if(temp->left != NULL)
            {
                q.push(temp->left);
            }
            if(temp->right != NULL)
            {
                q.push(temp->right);
            }
            level.push_back(temp->data);
        }
        ans.push_back(level);
    }
    return ans;
    
}

//build the tree from level order traversal

void buildFromLevelOrder(Node* &root)
{
    queue<Node* >q;
    cout << "Enter the data for root" << endl;
    int data;
    cin >> data;
    root=new Node(data);
    q.push(root);

    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();

        cout << "Enter left Node for " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1)
        {
            temp->left= new Node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right Node for " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1)
        {
            temp->right= new Node(rightData);
            q.push(temp->right);
        }
    }
}

//inorder traversal
void inorder(Node* root)
{
    //base case
    if(root == NULL)
    {
        return;
    }

    //pehle left ke liye call jayega...
    inorder(root->left);
    cout << root->data << " ";
    //phir right ke liye call jayega
    inorder(root->right);
}

//preorder traversal
void preorder(Node* root)
{
    //base case
    if(root == NULL)
    {
        return;
    }

    cout << root->data << " ";

    //pehle left ke liye call jayega...
    preorder(root->left);

    //phir right ke liye call jayega
    preorder(root->right);
}

//postorder traversal
void postorder(Node* root)
{
    //base case
    if(root == NULL)
    {
        return;
    }

    //pehle left ke liye call jayega...
    postorder(root->left);

    //phir right ke liye call jayega
    postorder(root->right);

    cout << root->data << " ";
}


int main()
{
    Node* root=NULL;

    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    //building the binary tree
    root=buildTree(root);
    cout << endl << endl;

    //level order traversal
    cout << "The level order traversal of the tree is " << endl;
    vector<vector<int>>ans=levelOrderTraversal(root);

    for(auto &it:ans)
    {
        for(auto &value:it)
        {
            cout << value << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    cout << "The inorder traversal of the tree is " << endl;
    inorder(root);
    cout << endl;

    cout << "The preorder traversal of the tree is " << endl;
    preorder(root);
    cout << endl;

    cout << "The postorder traversal of the tree is " << endl;
    postorder(root);
    cout << endl;






    return 0;

}