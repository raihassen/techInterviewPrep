
// Given a binary tree, tell whether this is a valid BST.

// This is BST
//            10
//           /  \
//          5    15
//         / \
//        1   7

// This is not BST
//            10
//           /  \
//          5    15
//         / \
//        1   11

// This is not BST
//            10
//           /  \
//          5    15
//         / \
//        6   7/

/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
bool isSorted(vector<int> &linear){
    for (int i=1; i<linear.size(); i++){
        if (linear[i]<=linear[i-1]){
            return false;
        }        
    }
    return true;
}
bool checkBSTHelper(Node* root, vector<int> &linear){
    if (root == NULL){
        return true;
    }
    checkBSTHelper(root->left, linear);
    linear.push_back(root->data);
    checkBSTHelper(root->right, linear);
    return isSorted(linear);
}
   bool checkBST(Node* root) {       
       vector<int> linear;
       return checkBSTHelper(root, linear);
   }

