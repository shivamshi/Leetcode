class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& list) {
        priority_queue <pair<int,ListNode*>, vector<pair<int,ListNode*>>, greater<pair<int,ListNode*>>> q;
        ListNode *ans=new ListNode(0);
        ListNode *temp=*(&ans);
        for(auto i:list){
            if(i)
                q.push({i->val,i});
        }
        while(!q.empty()){
            ListNode* p=q.top().second;
            temp->next=p;
            temp=temp->next;
            if(p->next){
                q.push({p->next->val,p->next});
            }             
            q.pop();            
        }
        return ans->next;
    }
};