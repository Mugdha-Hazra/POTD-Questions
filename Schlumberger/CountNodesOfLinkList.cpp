class Solution
{
    public:
    int getCount(struct Node* head){
    if(head==NULL)return 0;
    int x=1+getCount(head->next);
    return x;
    }
};
int getCount(struct Node* head,int k=0){
    if(head==NULL)return 0;
    int c=0;
    Node*p=head;
    while(p!=NULL)
    {c++;
        p=p->next;
    }
    return c;
    }
