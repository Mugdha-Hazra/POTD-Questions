class Solution
{
    public:
    int getCount(struct Node* head){
    if(head==NULL)return 0;
    int x=1+getCount(head->next);
    return x;
    }
};
