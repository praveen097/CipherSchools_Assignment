void reorderList(ListNode* head) {
        if(head==NULL)
            return;
        vector<ListNode*> node;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            node.push_back(temp);
            temp=temp->next;
        }
        bool chance=true;
        int i=1;
        ListNode* curr=head;
        int j=node.size()-1;
        while(i<=j)
        {
            if(chance)
            {
                curr->next=node[j];
                curr=node[j];
                j--;
                chance=false;
            }
            else
            {
                curr->next=node[i];
                curr=node[i];
                i++;
                chance=true;
            }
        }
        curr->next=NULL;
        return;
    }