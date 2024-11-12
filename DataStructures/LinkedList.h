#ifndef LINKEDLISTH
#define LINKEDLISTH

typedef struct linkedList
{
	int num;
	struct linkedList* next;
} linkedList;

linkedList* initList();
linkedList* add(linkedList* head, int num);
linkedList* remove(linkedList* head);
#endif