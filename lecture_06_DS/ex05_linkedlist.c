#include <stdio.h>
#include <stdlib.h>
#include "stdtypes.h"
// typedef struct node Node;

struct node
{
    uint_32 data;
    struct node * nextPtr;
};
// functions prototypes
void addNode(struct node * newNode);
void insertNode(struct node * newNode, uint_8 index);
void printNodes();
void printAt(uint_8);
void removeAt(uint_8);

struct node * head = NULL;       // initialize a global head node pointing to NULL

int main(void) {
    
    struct node * ptr;                  // declare a pointer to node, to hold each node's address
    uint_8 numOfNodes = 0;              // define the number of nodes enetered by the user

    printf("Please enter the number of nodes to add: ");
    scanf("%d", &numOfNodes);

    for (int i = 0; i < numOfNodes; i++) {
        ptr = (struct node *) malloc(sizeof(struct node));  // assign a dynamically allocated memory of type struct node to ptr
        printf("Enter node # %d: ", i+1);
        scanf("%d", &ptr->data);        // assign the entered data to the newly dynamically allocated node's data member
        addNode(ptr);            // add the new node to the linked list
    }

    printNodes();                  // print the linked list nodes' data
    puts("============== testing printAt() ===============");
    int idx = 0;
    printf("Pleas enter the index of a number to print: ");
    scanf("%d", &idx);
    printAt(idx);
    puts("");

    puts("============== testing insertNode() ==============");
    ptr = (struct node *) malloc(sizeof(struct node));  // assign a dynamically allocated memory of type struct node to ptr
    printf("Pleas enter the number to insert, and the index (separated by a space): ");
    scanf("%d %d", &ptr->data, &idx);
    insertNode(ptr, idx);
    printNodes();                  // print the linked list nodes' data

    puts("============== testing removeAt() ==============");
    printf("Pleas enter the index to remove at: ");
    scanf("%d", &idx);
    removeAt(idx);
    printNodes();                  // print the linked list nodes' data
    return 0;
}

// add one node at the end of the linked list
void addNode(struct node * newNode) {
    if (!head) {
        head = newNode;
        head->nextPtr = NULL;
        return;
    }
    struct node * current = head;
    while (current->nextPtr != NULL) {
        current = current->nextPtr;           // move the head to the next node
    }
    current->nextPtr = newNode;            //
    newNode->nextPtr = NULL;
}

void printNodes() {
    struct node * current = head;
    if (current) {
        while (current->nextPtr != NULL) {
            printf("%d -> ", current->data);
            current = current->nextPtr;
        }
        printf("%d\n", current->data);
    }else{
        printf("<-nothing->\n");
    }
    
}

void printAt(uint_8 index) {
    struct node * current = head;
    uint_8 counter = 0;
    if (current) {
        while (1) {
            if (counter == index) {
                printf("%d\n", current->data);
                break;
            }else if (counter < index)
            {
                if (current->nextPtr != NULL) {
                    counter++;
                    current = current->nextPtr;
                }else {
                    printf("not found\n");
                    break;
                }
            }
        }
    }
}

void insertNode(struct node * newNode, uint_8 index) {
    uint_8 counter = 0;
    struct node * current = head;
    if (index == 0) {
            newNode->nextPtr = head;
            head = newNode;
            return;
    }
    while (1) {
        if (counter == index-1) {
            newNode->nextPtr = current->nextPtr;
            current->nextPtr = newNode;
            break;
        }else if (counter < index) {
            if (current->nextPtr != NULL) {
                counter++;
                current = current->nextPtr;
            }else {
                printf("index out of boundary\n");
                break;
            }
        }
    }
}

void removeAt(uint_8 index) {
    struct node * temp;
    if (index == 0) {
        temp = head->nextPtr;
        free(head);
        head = temp;
        return;
    }
    uint_8 counter = 0;
    struct node * current = head;
    while (1) {
        if (counter == index - 1) {
            temp = current->nextPtr->nextPtr;
            free(current->nextPtr);
            current->nextPtr = temp;
            break;
        }else if (counter < index) {
            if (current->nextPtr != NULL) {
                counter++;
                current = current->nextPtr;
            }else {
                printf("index out of boundary\n");
                break;
            }
        }
    }
}