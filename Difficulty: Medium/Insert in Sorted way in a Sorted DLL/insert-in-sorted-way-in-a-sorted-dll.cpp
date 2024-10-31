//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node* getNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = newNode->next = NULL;
    return newNode;
}

void printList(struct Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


// } Driver Code Ends
/*structure of the node of the DLL is as
struct Node {
    int data;
    struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
// Return the head after insertion
class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        // Code here
        vector<int> v;
        bool inserted = false;
        
        // Traverse the list and insert `x` in the sorted position in vector `v`
        Node* curr = head;
        while (curr) {
            if (!inserted && curr->data >= x) {
                v.push_back(x);
                inserted = true;
            }
            v.push_back(curr->data);
            curr = curr->next;
        }
        
        // If `x` is the largest, it wasn't inserted in the loop
        if (!inserted) {
            v.push_back(x);
        }
        
        // Reconstruct the doubly linked list
        Node* ans = new Node();
        ans->data = v[0];
        ans->prev = nullptr;
        Node* temp = ans;

        for (int i = 1; i < v.size(); i++) {
            Node* newNode = new Node();
            newNode->data = v[i];
            newNode->prev = temp;
            temp->next = newNode;
            temp = newNode;
        }
        
        temp->next = nullptr;  // Last node's next should be null
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        Node *head = nullptr, *tail = nullptr;
        int x;

        if (ss >> x) {
            head = getNode(x);
            tail = head;
        }

        while (ss >> x) {
            tail->next = getNode(x);
            tail->next->prev = tail;
            tail = tail->next;
        }

        int valueToInsert;
        cin >> valueToInsert;
        cin.ignore(); // Ignore the newline character after the value

        Solution obj;
        head = obj.sortedInsert(head, valueToInsert);
        printList(head);
    }

    return 0;
}

// } Driver Code Ends