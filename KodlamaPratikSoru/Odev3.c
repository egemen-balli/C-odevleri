#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

bool doesContain(int a, struct Node* head){
    if(head == NULL){
        return false;
    }

    while(head->next != NULL){
      if (a == head->data)
      {
        return true;
      } else{
        head = head->next;
      }
    }
    return false;
 }

int main()
{
    struct Node* head = NULL;
    struct Node* resultList = NULL;
    int arr[] = {2, 4, 5, 9, 12, 4, 3, 5, 12, 4};
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++){
        if(!doesContain(arr[i], head)){
            push(&head, arr[i]);
        }
        else{
            if(!doesContain(arr[i], resultList)){
                push(&resultList, arr[i]);
            }
        }
    }

    while(resultList->next != NULL){
        printf("%d ", resultList->data);
        resultList = resultList->next;
    }

    return 0;
}