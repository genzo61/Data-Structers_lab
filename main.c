#include <stdio.h>
#include <stdlib.h>

struct Node{
       int data;
       struct Node *next;
};


void insertnode(struct Node *head,int value){
     struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
     newnode->data = value;
     newnode->next = Null;

     if(*head == Null){
          *head = newnode;
     }
     else if(newnode->data %2 !=0){
          struct Node *current = newnode;
          current->data = value;
          current->next = *head;
          head = current;
     }
     else{
          struct Node *current = *head;
          while(current->next!=Null){
              current = current->next;
          }
          current->next = newnode;
     }

}
int main(int argc, char *argv[])
{
    int value;
    struct Node *head = Null;

    printf("Cikis icin -1 e basiniz");
    while(1){
       scanf("%d",&value);
       if(value == -1){
            break;
       }
       insertnode(&head,value);

    }
    struct Node *current = head;
    printf("list start with : ");
    while(current != Null){
          printf("%d->",current->data);
          current = current->next;
    }
    printf("end of the list \n");

  return 0;
}
