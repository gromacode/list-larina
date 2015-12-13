#include <stdio.h>
#include <stdlib.h>

#include "list.h"

#pragma warning(disable: 4996)

#define PAUSE system("pause");

int main(int argc, char *argv[]) {
    int counter = 0,
        count_of_nodes = 5,
        value = 0;

    tNode *list1 = (tNode *)malloc(sizeof(tNode));
    tNode *list1 = (tNode *)malloc(sizeof(tNode));
    createList(list1, count_of_nodes);
    printList(list1);
    fillList(list1);
    printf("DATA\n");
    printList(list1);

    PAUSE
    return 0;
}
