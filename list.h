#ifndef _TREE_
#define _TREE_

typedef struct Node {
    int data;
    struct Node *next;
}tNode;

void createList(tNode *, int);
void printList(tNode *);
void fillList(tNode *);
void addNodeToEnd(tNode *, tNode *);
tNode *findPositive(tNode *, tNode *);

#endif // !_TREE_
