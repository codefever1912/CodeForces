#include <iostream>
#include <vector>
using namespace std;

// Node class
template<class T>
class Node{
    public:
        Node *next;
        T val;

        Node():val(T()), next(nullptr){}
        Node(T val):val(val), next(nullptr) {}
        Node(T val, Node* next):val(val), next(next){}

};

//Stack
template<class T>
class Stack{
    Node* top;
    int size;

    public:
        Stack():top(nullptr), size(0){}

        // void push(Node *node) {
        //     if(!top) {
        //         top=node;
        //     } else {
        //         node->next = top;
        //         top = node;
        //     }
        // }

        void push(T val) {
            Node *temp = new Node(val);
            if(this->isEmpty()) {
                top = temp;
            } else {
                temp-next = top;
                top = temp;
                size++;
            }
        }

        Node* pop() {
            if(this->isEmpty()) {
                cout << "Cannot pop empty stack!" << endl;
                return nullptr;
            } else {
                Node *temp = top;
                top = top->next;
                size--;

                return temp;
            }
        }

        bool isEmpty() {
            return size == 0;
        }

        int getSize() {
            return size;
        }
};

//Queue 
template<class T>
class QueueNode{
    T val;
    QueueNode* next;
    QueueNode():val(T()), next(nullptr){}
    QueueNode(T val):val(val), next(nullptr){}
    QueueNode(T val, QueueNode* next):val(val), next(next){}


};  

template<class T>
class Queue{
    Node *front, *back;
    int size;
    
    public:
        Queue():front(nullptr),back(nullptr),size(0){}

        void enqueue(T val) {
            Node *temp = new Node(val);
            if(this->isEmpty()) {
                front = temp; back = temp;
            } else {
                back->next = temp;
                back = temp;
            }
            size++;
        }

        Node* dequeue() {
            if(this->isEmpty()) {
                cout << "Attempting to deque empty queue, returning nullptr :)" << endl;
                return nullptr;
            } else {
                Node* retValue = front;
                front = front->next;
                size--;
                return retValue;
            }
        }

        bool isEmpty() {
            return size == 0;
        }

        int getSize() {
            return size;
        }

        void print() {
            if(this->isEmpty()) {
                cout << "Queue empty at the moment.."
            } else {
                Node* temp = this->front;
                while(temp!=nullptr) {
                    cout << this->val << endl;
                    temp = temp->next;
                }
        }
        }
};

//Linked List
template<class T>
class ListNode{
    T val;
    ListNode *prev,*next;

    ListNode():val(0), prev(nullptr), next(nullptr){}
    ListNode(T val, ListNode *prev=nullptr, ListNode *next=nullptr):val(val), prev(prev), next(next) {}

    void pushfromFront(int val) {
    }

    // void insetFromTail(int val) {}
    // void insertAtPos(int val, int pos){}
    // void deletefromFront(int val, int pos){}
    // void deletefromTail(int val, int pos){}
    // void getList(){}
    // int getSize(){}
    // bool isEmpty(){return true;}
};

//Tree - arbitrary no. of children

//Binary Tree (AVL, Red Black)
template<class T>
class BinaryTree{
    struct TreeNode{
        T val;
        TreeNode *right;
        TreeNode *left;

        Node(T val=T(), right=nullptr, left=nullptr):val(val), left(left), right(right){}
    };

    TreeNode *root{nullptr}; 
    public:
        void insert(T val){
            if(root==nullptr) {
                root = node;
            } else {
                TreeNode *temp = root;
                while(true){
                    if(val==temp->val) {break;}
                    if(val > temp->val){
                        if(temp->right == nullptr){
                            TreeNode *tmp = new TreeNode(val);
                            temp->right = tmp;
                            break;
                        }
                        temp = temp->right;
                    } else if(val < temp->val){
                        if(temp->left == nullptr) {
                            TreeNode *tmp = new TreeNode(val);
                            temp->left = tmp;
                            break;
                        }
                        temp = temp->left;
                    }
                }
            }
        }
        void deleteNode(T val){}
        void inOrderTraversal(){}
        void preOrderTraversal(){}
        void postOrderTraversal(){}
};

//Trie structure
class Trie{
    struct TrieNode{
        vector<char> children = vector<char>(26, '\0');
        bool isEnd;
        TrieNode() : isEnd(false) {}
    };

    TrieNode *root;
};

// //Sorting techniques

//Bubble Sort
void bubbleSort(int a[], int size) {
    for(int i{0}; i < size-1; i++){
        for(int j{0}; j < size-1-i; j++) {
            if(a[j] < a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            } 
        }
    }
}

//Insertion Sort
void selectionSort(int a[], int size) {
    for(int i{0}; i < size-1; i++) {
        int mn = i;
        for(int j{i+1}; j < size; j++) {
            if(a[j] < a[i]) {
                mn = j;
            }
        }
        int temp = a[mn];
        a[mn] = a[i];
        a[i] = temp;    
    }
}

//Merge Sort
void merge(int a[], int s , int m, int e) {
    int leftArrSize = m-s+1;
    int rightArrSize = e-m;
    int left[leftArrSize], right[rightArrSize];
    for(int i{0}; i<leftArrSize;i++) {
        left[i] = a[s+i];
    }
    for(int i{0};i<rightArrSize;i++) {
        right[i] = a[i+m+1];
    }

    int i{0},j{0},k{s};
    while(i < leftArrSize && j < rightArrSize) {
        if(left[i] <= right[j]) {
            a[k] = left[i];
            i++;
        } else {
            a[k] = right[j];
            j++;
        }
        k++;
    }

    while(i < leftArrSize) {
        a[k] = left[i]; i++; k++;
    }

    while(j < rightArrSize) {
        a[k] = right[j]; j++; k++;
    }
}

void mergeSort(int a[], int l, int r) {
    if(l >= r) {
        return;
    }

    int mid = l + (r-l)/2;
    mergeSort(a,l,mid);
    mergeSort(a,mid+1,r);
    merge(a,l,mid,r);
}

int main() {
    int a[5] = {1,3,2,5,4};
    int size = sizeof(a) / sizeof(a[0]);
    // selectionSort(a,size);
    // for(int x : a) {
    //     cout << x << " ";
    // }
    // cout << endl;
    bubbleSort(a,size);
    for(int x : a) {
        cout << x << " ";
    }
}