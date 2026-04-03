#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node *NODE;

// Create a new node with given data
NODE createNodeInCLL(int data) {
    NODE temp = (NODE) malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
/* Create new node */
NODE createNode(int data) {
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Create CLL with n nodes
NODE createCLL(int n ) {
     if (n <= 0)
        return NULL;

    NODE first = NULL, last = NULL, temp;
    int x;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        temp = createNode(x);
