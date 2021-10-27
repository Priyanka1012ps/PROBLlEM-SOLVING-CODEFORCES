#include <bits/stdc++.h>
using namespace std;
struct node
   {
       int data;
       node *next;
       node(int n)
       { 
           data =n;
           next=NULL;
       }  
   };
int search(node *head,int x,int p)
{
    
    if(head == NULL)
    return -1;
    else if(head->data==x)
    {
        
        return p;
    }
    else
    {
        search(head->next,x,++p);
        
    }
}
int main()
{
   node *head=new node(10);
   node *temp1 =new node(20);
   node *temp2=new node(30);
   head->next=temp1;
   temp1->next=temp2;
   int p =1,x;
   cout<<"enter key";
   cin>>x;
  cout<< search(head,x, p)<<endl;
   return 0;
}
