#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Node {
public:
    int val;
    Node* next;
};

vector<int> fun(Node* l) {
    Node* temp = l;
    vector<int> v;
    while (temp != NULL) {
        v.push_back(temp->val);
        temp = temp->next;
    }
    return v;
}

void push(Node** head, int new_data) {
    Node* new_node = new Node();
    new_node->val = new_data;
    new_node->next = (*head);
    *head = new_node;
}

Node* addTwoNumbers(Node* l1, Node* l2) {
    vector<int> v = fun(l1);
    vector<int> g = fun(l2);

    int n = v.size();
    int m = g.size();

    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    Node* result = NULL;

    while (i >= 0 || j >= 0 || carry != 0) {
        int sum = carry;
        if (i >= 0)
            sum += v[i--];
        if (j >= 0)
            sum += g[j--];

        carry = sum / 10;
        sum %= 10;

        push(&result, sum);
    }

    return result;
}

Node* reverse(Node* head){
    Node* temp = NULL;
    while(head!=NULL){
        Node* next = head->next;
        head->next = temp;
        temp=head;
        head = next;
    }
    return temp;
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        Node* head1 = NULL;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            push(&head1, x);
        }
        Node* head2 = NULL;
        for (int i = 0; i < m; i++) {
            int u;
            cin >> u;
            push(&head2, u);
        }
        printList(reverse(addTwoNumbers(head1, head2)));
    }
    return 0;
}
