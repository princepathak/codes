#include<iostream>
using namespace std;
class Tree_node{ //structure of a node in a tree.
    public:
    int key;
    Tree_node *left;
    Tree_node *right;
    Tree_node(){
        key=-1;
        left=NULL;
        right=NULL;
    }
};
class Tree{
    public:
    Tree(){}
    Tree_node *root=NULL;
    Tree_node* create_node(int key){ //creates a node.
        Tree_node *temp=new Tree_node;
        temp->key=key;
        temp->left=NULL;
        temp->right=NULL;
        cout<<"new key "<<temp->key<<endl;
        return temp;
    }
   Tree_node* Tree_creation(Tree_node* temp1){
        int T,value;
        cout<<"Enter the Value of  node\n";
        cin>>value;
        temp1=create_node(value);

        cout<<"Do You Still want to create child\nIf yes please enter 1\n";
        cin>>T;
        if(T==1){
        temp1->left=Tree_creation(temp1->left);
        temp1->right=Tree_creation(temp1->right);
        }
        return temp1;
    }
    Tree_node* insert(int data,Tree_node * root){
        if(root==NULL){
            root=create_node(data);
        }
        else {
            if(data>root->key){
               root->right= insert(data,root->right);
            }
            else if(data<root->key){
               root->left = insert(data,root->left);
            }
        }
        return root;
    }   
    void Tree_Traversal(Tree_node* temp2){ //traverses a tree and print the key of a node.
        if(temp2==NULL){
            return;
        }
        cout<<temp2->key<<"\n";
        Tree_Traversal(temp2->left);
        Tree_Traversal(temp2->right);
        return;
    }
};
int main(){
    Tree t1;
    int data,n;
    cout<<"Enter number of the nodes in tree"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        t1.root=t1.insert(data,t1.root);
    }
    cout<<"\n\n\n\n";
    t1.Tree_Traversal(t1.root);
    return 0;
}