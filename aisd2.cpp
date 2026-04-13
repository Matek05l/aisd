// FIFO 3.0

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//const int MAX_SIZE = 1002;
//
//struct MyQueue {
//    int arr[MAX_SIZE];
//    int head = 0;
//    int tail = 0;
//    int length = MAX_SIZE;
//
//    void enqueue(int x) {
//        arr[tail] = x;
//        if (tail == length - 1) {
//            tail = 0;
//        }
//        else {
//            tail = tail + 1;
//        }
//    }
//
//    int dequeue() {
//        int x = arr[head];
//        if (head == length - 1) {
//            head = 0;
//        }
//        else {
//            head = head + 1;
//        }
//        return x;
//    }
//
//    bool isEmpty() {
//        return head == tail;
//    }
//};
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int T;
//    if (!(cin >> T)) return 0;
//
//    MyQueue q;
//
//    while (T--) {
//        string command;
//        cin >> command;
//
//        if (command == "ADD") {
//            int x;
//            cin >> x;
//            q.enqueue(x);
//        }
//        else if (command == "DEL") {
//            if (q.isEmpty()) {
//
//                cout << "\n";
//            }
//            else {
//                cout << q.dequeue() << "\n";
//            }
//        }
//        else if (command == "ISEMPTY") {
//            if (q.isEmpty()) {
//                cout << "TAK\n";
//            }
//            else {
//                cout << "NIE\n";
//            }
//        }
//    }
//
//    return 0;
//}



//// LIFO 3.0
//
//#include <iostream>
//#include <string>
//
//     using namespace std;
//
// const int MAX_SIZE = 1002;
//
// struct MyStack {
//     int arr[MAX_SIZE];
//     int top = 0;
//
//     void push(int x) {
//         arr[top] = x;
//         top = top + 1;
//     }
//
//     int pop() {
//         top = top - 1;
//         return arr[top];
//     }
//
//     bool isEmpty() {
//         return top == 0;
//     }
// };
//
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//
//     int T;
//     if (!(cin >> T)) return 0;
//
//     MyStack s;
//
//     while (T--) {
//         string command;
//         cin >> command;
//
//         if (command == "ADD") {
//             int x;
//             cin >> x;
//             s.push(x);
//         }
//         else if (command == "DEL") {
//             if (s.isEmpty()) {
//                 cout << "\n";
//             }
//             else {
//                 cout << s.pop() << "\n";
//             }
//         }
//         else if (command == "ISEMPTY") {
//             if (s.isEmpty()) {
//                 cout << "TAK\n";
//             }
//             else {
//                 cout << "NIE\n";
//             }
//         }
//     }
//
//     return 0;
// }

//// Lista 3.5
//#include <iostream>
//#include <string>
//
//using namespace std;
//struct ListNode {
//    int key;
//    ListNode* prev;
//    ListNode* next;
//
//    ListNode(int k, ListNode* p, ListNode* n) {
//        key = k;
//        prev = p;
//        next = n;
//    }
//};
//
//
//struct MyList {
//    ListNode* head = nullptr;
//    int list_size = 0;
//
//    ListNode* listSearch(int key) {
//        ListNode* x = head;
//        while (x != nullptr && x->key != key) {
//            x = x->next;
//        }
//        return x;
//    }
//
//
//    void listInsert(int key) {
//        ListNode* node = new ListNode(key, nullptr, head);
//
//        if (head != nullptr) {
//            head->prev = node;
//        }
//        head = node;
//        list_size++;
//    }
//
//    void listDelete(ListNode* node) {
//        if (node->prev != nullptr) {
//            node->prev->next = node->next;
//        }
//        else {
//            head = node->next;
//        }
//
//        if (node->next != nullptr) {
//            node->next->prev = node->prev;
//        }
//
//        delete node;
//        list_size--;
//    }
//
//    void print() {
//        ListNode* x = head;
//        while (x != nullptr) {
//            cout << x->key << " ";
//            x = x->next;
//        }
//        cout << "\n";
//    }
//};
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int T;
//    if (!(cin >> T)) return 0;
//
//    MyList lst;
//
//    while (T--) {
//        string command;
//        cin >> command;
//
//        if (command == "ADD") {
//            int x;
//            cin >> x;
//            lst.listInsert(x);
//        }
//        else if (command == "DEL") {
//            int x;
//            cin >> x;
//
//            ListNode* nodeToDelete = lst.listSearch(x);
//            if (nodeToDelete != nullptr) {
//                lst.listDelete(nodeToDelete);
//            }
//        }
//        else if (command == "FIND") {
//            int x;
//            cin >> x;
//            if (lst.listSearch(x) != nullptr) {
//                cout << "TAK\n";
//            }
//            else {
//                cout << "NIE\n";
//            }
//        }
//        else if (command == "PRINT") {
//            lst.print();
//        }
//        else if (command == "SIZE") {
//            cout << lst.list_size << "\n";
//        }
//    }
//
//    return 0;
//}


//// Drzewo BST 3.5
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct Node {
//    int data;
//    Node* left;
//    Node* right;
//
//   
//    Node(int val) : data(val), left(nullptr), right(nullptr) {}
//};
//
//Node* insert(Node* root, int val) {
//    if (root == nullptr) {
//        return new Node(val);
//    }
//
//    if (val < root->data) {
//        root->left = insert(root->left, val);
//    }
//    else if (val > root->data) {
//        root->right = insert(root->right, val);
//    }
//
//    return root;
//}
//
//bool search(Node* root, int val) {
//    if (root == nullptr) {
//        return false; 
//    }
//    if (root->data == val) {
//        return true; 
//    }
//
//
//    if (val < root->data) {
//        return search(root->left, val);
//    }
//    else {
//        return search(root->right, val);
//    }
//}
//
//void inorder(Node* root) {
//    if (root == nullptr) return;
//    inorder(root->left);
//    cout << root->data << " ";
//    inorder(root->right);
//}
//
//void postorder(Node* root) {
//    if (root == nullptr) return;
//    postorder(root->left);
//    postorder(root->right);
//    cout << root->data << " ";
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int T;
//    if (!(cin >> T)) return 0;
//
//    Node* root = nullptr;
//
//    while (T--) {
//        string command;
//        cin >> command;
//
//        if (command == "ADD") {
//            int x;
//            cin >> x;
//            root = insert(root, x);
//        }
//        else if (command == "FIND") {
//            int x;
//            cin >> x;
//            if (search(root, x)) {
//                cout << "TAK\n";
//            }
//            else {
//                cout << "NIE\n";
//            }
//        }
//        else if (command == "INORDER") {
//            inorder(root);
//            cout << "\n";
//        }
//        else if (command == "POSTORDER") {
//            postorder(root);
//            cout << "\n";
//        }
//    }
//
//    return 0;
//}

////### zrownowazone BST 4.5
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//struct Node {
//    int data;
//    Node* left;
//    Node* right;
//
//    Node(int val) : data(val), left(nullptr), right(nullptr) {}
//};
//
//Node* buildBalancedBST(const vector<int>& arr, int start, int end) {
//    if (start > end) {
//        return nullptr;
//    }
//
//    int mid = start + (end - start) / 2;
//
//    Node* root = new Node(arr[mid]);
//
//    root->left = buildBalancedBST(arr, start, mid - 1);
//    root->right = buildBalancedBST(arr, mid + 1, end);
//
//    return root;
//}
//
//void preorder(Node* root) {
//    if (root == nullptr) {
//        return;
//    }
//    cout << root->data << " ";
//    preorder(root->left);
//    preorder(root->right);
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int N;
//    if (!(cin >> N)) return 0;
//
//    vector<int> arr(N);
//    for (int i = 0; i < N; ++i) {
//        cin >> arr[i];
//    }
//
//    sort(arr.begin(), arr.end());
//
//    Node* root = buildBalancedBST(arr, 0, N - 1);
//
//    preorder(root);
//    cout << "\n";
//
//    return 0;
//}

//### usuwaie BST 5.0

#include <iostream>
#include <string>

using namespace std;


struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }

    if (val < root->data) {
        root->left = insert(root->left, val);
    }
    else if (val > root->data) {
        root->right = insert(root->right, val);
    }

    return root;
}

bool search(Node* root, int val) {
    if (root == nullptr) {
        return false;
    }
    if (root->data == val) {
        return true;
    }

    if (val < root->data) {
        return search(root->left, val);
    }
    else {
        return search(root->right, val);
    }
}

Node* findMin(Node* root) {
    while (root->left != nullptr) {
        root = root->left;
    }
    return root;
}

Node* deleteNode(Node* root, int val) {
    if (root == nullptr) {
        return root;
    }

    if (val < root->data) {
        root->left = deleteNode(root->left, val);
    }
    else if (val > root->data) {
        root->right = deleteNode(root->right, val);
    }
    else {

        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = findMin(root->right);

        root->data = temp->data;

        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root) {
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;

    Node* root = nullptr;

    while (T--) {
        string command;
        cin >> command;

        if (command == "ADD") {
            int x;
            cin >> x;
            root = insert(root, x);
        }
        else if (command == "DEL") {
            int x;
            cin >> x;
            root = deleteNode(root, x);
        }
        else if (command == "FIND") {
            int x;
            cin >> x;
            if (search(root, x)) {
                cout << "TAK\n";
            }
            else {
                cout << "NIE\n";
            }
        }
        else if (command == "INORDER") {
            inorder(root);
            cout << "\n";
        }
        else if (command == "POSTORDER") {
            postorder(root);
            cout << "\n";
        }
    }

    return 0;
}
