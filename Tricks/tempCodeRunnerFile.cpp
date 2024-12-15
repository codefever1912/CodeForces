template<class T>
// class Node{
//     public:
//         Node *next;
//         T val;

//         Node():val(0), next(nullptr){}
//         Node(T val):val(val), next(nullptr) {}
//         Node(T val, Node* next):val(val), next(next){}

// };

// //Stack
// template<class T>
// class Stack{
//     Node* top;
//     int size;

//     public:
//         Stack():top(nullptr), size(0){}

//         // void push(Node *node) {
//         //     if(!top) {
//         //         top=node;
//         //     } else {
//         //         node->next = top;
//         //         top = node;
//         //     }
//         // }

//         void push(T val) {
//             Node *temp = new Node(val);
//             if(this->isEmpty()) {
//                 top = temp;
//             } else {
//                 temp-next = top;
//                 top = temp;
//                 size++;
//             }
//             delete temp;
//         }

//         Node* pop() {
//             if(this->isEmpty()) {
//                 cout << "Cannot pop empty stack!" << endl;
//                 return nullptr;
//             } else {
//                 Node *temp = top;
//                 top = top->next;
//                 size--;

//                 return temp;
//             }
//         }

//         bool isEmpty() {
//             return size == 0;
//         }

//         int getSize() {
//             return size;
//         }
// };

// //Queue 
// template<class T>
// class Queue{
//     Node *front, *back;
//     int size;
    
//     public:
//         Queue():front(nullptr),back(nullptr),size(0){}

//         void enqueue(T val) {
//             Node *temp = new Node(val);
//             if(this->isEmpty()) {
//                 front = temp; back = temp;
//             } else {
//                 back->next = temp;
//                 back = temp;
//                 delete temp;
//             }
//             size++;
//         }

//         Node* dequeue() {
//             is(this->isEmpty()) {
//                 cout << "Attempting to deque empty queue, returning nullptr :)" << endl;
//                 return nullptr;
//             } else {
//                 Node* retValue = front;
//                 front = front->next;
//                 size--;
//                 return retValue;
//             }
//         }

//         bool isEmpty() {
//             return size == 0;
//         }

//         int getSize() {
//             return size;
//         }
// };

// //Linked List
// template<class T>
// class ListNode{
//     T val;
//     ListNode *prev,*next;

//     ListNode():val(0), prev(nullptr), next(nullptr){}
//     ListNode(T val, ListNode *prev=nullptr, ListNode *next=nullptr):val(val), prev(prev), next(next) {}

//     void pushfromFront(int val) {
//     }

//     // void insetFromTail(int val) {}
//     // void insertAtPos(int val, int pos){}
//     // void deletefromFront(int val, int pos){}
//     // void deletefromTail(int val, int pos){}
//     // void getList(){}
//     // int getSize(){}
//     // bool isEmpty(){return true;}
// };

// //Tree

// //Binary Tree (AVL, Red Black)

// //Trie Structure
// class TrieNode{
//     TrieNode* a[26];
// };

// class Trie{};

// //Sorting techniques
// void swap() {}

// void bubbleSort(int a[], int size) {
//     for(int i{0}; i < size-1; i++){
//         for(int j{0}; j < size-1-i; j++) {
//             if(a[j] > a[j+1]) {
//                 int temp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = temp;
//             } 
//         }
//     }
// }

// void selectionSort(int a[], int size) {
//     for(int i{0}; i < size-1; i++) {
//         int mn = i;
//         for(int j{i+1}; j < size; j++) {
//             if(a[j] < a[i]) {
//                 mn = j;
//             }
//         }
//         int temp = a[mn];
//         a[mn] = a[i];
//         a[i] = temp;    
//     }
// }
