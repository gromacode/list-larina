#include <stdlib.h>
#include <stdio.h>

#include "list.h"

void addNodeToEnd(tNode *list, tNode *node) {
    tNode *head = NULL, *current = NULL;
    head = current = list;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = node;
    node->next = NULL;
}

tNode *findPositive(tNode *list1, tNode *list2) {
    tNode *head = NULL,
        *current = NULL,
        *node = NULL;

    head = current = list1;
    while (current->next != NULL) {
        current = current->next;
        if (current->data >= 0) {
            node = current;
            return node;
        }
    }
}

void createList(tNode *list, int count_of_nodes) {
    tNode *current = NULL, *node = NULL;
    list->next = NULL;
    current = list;
    int i = 0;
    for (i = 0; i < count_of_nodes; i++) {
        node = (tNode *)malloc(sizeof(tNode));
        node->next = NULL;
        current->next = node;
        current = node;
    }
}

void printList(tNode *list) {
    tNode *current = NULL;
    current = list;
    while (current->next != NULL) {
        printf("node: %p   val: %d\n", current, current->data);
        current = current->next;
    }
}

void fillList(tNode *list) {
    tNode *current = NULL;
    int value = 0;
    current = list;
    while (current->next != NULL) {
        value = rand() % 10 - rand() % 10;
        current->data = value;
        current = current->next;
    }
}
