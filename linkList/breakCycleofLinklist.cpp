// THis is solution for the problem of breaking a cycle in a linklist


#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
*/

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;

        bool hasCycle = false;

        // Step 1: Detect if a cycle exists
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;

            if (fast == slow) {
                hasCycle = true;
                break;
            }
        }

        // No cycle found
        if (!hasCycle) return NULL;

        // Step 2: Find the entry point of the cycle
        ListNode* prev = NULL;
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            prev = fast ;
            fast = fast->next;
        }

        prev = NULL ;

    return head; // first node of cycle
    }
};

int main() {
    // Example Input: [3,2,0,-4], pos = 1
    // That means: tail connects to the node at index 1 (0-based)
    int n = 4;
    vector<int> values = {3, 2, 0, -4};
    int pos = 1; // index of cycle connection (set -1 for no cycle)

    // Create linked list
    vector<ListNode*> nodes;
    for (int val : values) {
        nodes.push_back(new ListNode(val));
    }
    for (int i = 0; i < n - 1; i++) {
        nodes[i]->next = nodes[i + 1];
    }

    // If pos != -1, connect tail to create a cycle
    if (pos != -1) {
        nodes[n - 1]->next = nodes[pos];
    }

    // Head of the list
    ListNode* head = nodes[0];

    // Run solution
    Solution sol;
    ListNode* cycleStart = sol.detectCycle(head);

    if (cycleStart) {
        cout << "Cycle starts at node with value: " << cycleStart->val << endl;
    } else {
        cout << "No cycle detected" << endl;
    }

    return 0;
}
