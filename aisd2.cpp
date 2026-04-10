//// FIFO 3.0
//
//#include <iostream>
//#include <queue>
//#include <string>
//
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int T;
//    if (!(cin >> T)) return 0;
//
//    queue<int> q;
//
//    while (T--) {
//        string command;
//        cin >> command;
//
//        if (command == "ADD") {
//            int x;
//            cin >> x;
//            q.push(x);
//        }
//        else if (command == "DEL") {
//            if (q.empty()) {
//                cout << "\n";
//            }
//            else {
//                cout << q.front() << "\n";
//                q.pop();
//            }
//        }
//        else if (command == "ISEMPTY") {
//            if (q.empty()) {
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
//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int T;
//    if (!(cin >> T)) return 0;
//
//    stack<int> s;
//
//    while (T--) {
//        string command;
//        cin >> command;
//
//        if (command == "ADD") {
//            int x;
//            cin >> x;
//            s.push(x);
//        }
//        else if (command == "DEL") {
//            if (s.empty()) {
//                cout << "\n";
//            }
//            else {
//                cout << s.top() << "\n";
//                s.pop();
//            }
//        }
//        else if (command == "ISEMPTY") {
//            if (s.empty()) {
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

//// Lista 3.5
//#include <iostream>
//#include <list>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int T;
//    if (!(cin >> T)) return 0;
//
//    list<int> lst;
//
//    while (T--) {
//        string command;
//        cin >> command;
//
//        if (command == "ADD") {
//            int x;
//            cin >> x;
//            lst.push_front(x);
//        }
//        else if (command == "DEL") {
//            int x;
//            cin >> x;
//            auto it = find(lst.begin(), lst.end(), x);
//            if (it != lst.end()) {
//                lst.erase(it); 
//            }
//        }
//        else if (command == "FIND") {
//            int x;
//            cin >> x;
//            auto it = find(lst.begin(), lst.end(), x);
//            if (it != lst.end()) {
//                cout << "TAK\n";
//            }
//            else {
//                cout << "NIE\n";
//            }
//        }
//        else if (command == "PRINT") {
//            for (int val : lst) {
//                cout << val << " ";
//            }
//            cout << "\n";
//        }
//        else if (command == "SIZE") {
//            cout << lst.size() << "\n";
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