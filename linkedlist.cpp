#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
     int item;
     node *next;
 };
 class linkedlist
 {
 private:
    node *start;
 public:
     linkedlist()
     {
         start=NULL;
     }
    void insertnode(int data)
    {
        node *n=new node;
        if(start==NULL)
        {
            n->item=data;
            n->next=NULL;
            start=n;
        }
        else
        {
            n->item=data;
            n->next=start;
            start=n;
        }

    }
 };
int main()
{
    linkedlist nn;
    nn.insertnode(45);
}
