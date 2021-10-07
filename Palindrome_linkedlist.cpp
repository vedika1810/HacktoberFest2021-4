#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    if(head==NULL)
    cout<<"NULL";
    else{
        cout<<head->data<<" ";
        display(head->next);
    }
}


bool ispallindrome(struct node *head)
{
    if(head==NULL || head->next==NULL)
    return true;
    
    struct node *temp;
    temp=head;
    stack <int> s;
    while(temp!=NULL)
    {
        s.push(temp->data);
        temp=temp->next;
    }
    // again traversing the linked list to compare
    temp=head;
    while(temp!=NULL)
    {
        int TOS=s.top();
        s.pop();
        
        if(TOS != temp->data)
        return false ;
        temp=temp->next;
    }
    return true;
}


int main()
{
    int i,n;
    struct node *head,*prev,*p;
    cout<<"size of ll:";
    cin>>n;
    head=NULL;
    for(i=0;i<n;i++)
    {
        p=(node*)malloc(sizeof(node));
        cin>>p->data;
        if(head==NULL)
        head=p;
        else
        prev->next=p;
        prev=p;
    }
    display(head);
    cout<<endl;
    int result=ispallindrome(head);
   if(result == 1)
            cout<<"It is a Palindrome \n";
    else
        cout<<"It is not a Palindrome\n";
 
return 0;
}


