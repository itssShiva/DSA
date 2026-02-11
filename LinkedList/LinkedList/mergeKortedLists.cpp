#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,ListNode*>,
                       vector<pair<int,ListNode*>>,
                       greater<pair<int,ListNode*>>> pq;

        for(int i = 0; i < lists.size(); i++){
            if(lists[i]){
                pq.push({lists[i]->val, lists[i]});
            }
        }

        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;

        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();

            temp->next = it.second;
            temp = temp->next;

            if(it.second->next){
                pq.push({it.second->next->val, it.second->next});
            }
        }

        return dummyNode->next;
    }
};

int main() {
    ListNode* l1 = new ListNode(1, new ListNode(4, new ListNode(5)));
    ListNode* l2 = new ListNode(1, new ListNode(3, new ListNode(4)));
    ListNode* l3 = new ListNode(2, new ListNode(6));

    vector<ListNode*> lists = {l1, l2, l3};

    Solution obj;
    ListNode* result = obj.mergeKLists(lists);

    while(result){
        cout << result->val << " ";
        result = result->next;
    }

    return 0;
}
