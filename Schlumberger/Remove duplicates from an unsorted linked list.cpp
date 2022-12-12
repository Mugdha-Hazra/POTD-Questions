//Remove duplicates from an unsorted linked list

class Solution
{
    public:
    Node * removeDuplicates( Node *head) 
    {   map<int,int>mp;     //map for storing the element and its frequency.
        Node *curr=head,*prev=head;
        mp[curr->data]=1;
        curr=curr->next;
        while(curr!=NULL)
        {
            if(mp[curr->data]) //if map contains the data then free the current value
            {
                prev->next=curr->next;
                free(curr);
            }
            else{       //add that element in the map and move the prev to the current value
                mp[curr->data]=1;
                prev=curr;
            }
            curr=prev->next; // everytime move current to prev next.
        }
        return head;  //return the head for the refrence.
    }
};
