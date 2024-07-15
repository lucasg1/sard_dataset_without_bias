typedef struct _linkedList
{
    struct _linkedList *next;
    struct _linkedList *prev;
} linkedList;
typedef struct _badStruct
{
    linkedList list;
} badStruct;
static linkedList *linkedListPrev, *linkedListNext;
void FUN0()
{
    badStruct data;
    badStruct *dataPtr1 = &data;
    badStruct *dataPtr2 = &data;
    linkedList head = { &head, &head };
    data.list.next = head.next;
    data.list.prev = head.prev;
    head.next = &data.list;
    head.prev = &data.list;
    {
        badStruct data = *dataPtr1;
        ; 
        *dataPtr1 = data;
    }
    {
        badStruct data = *dataPtr2;
        linkedListPrev = data.list.prev;
        linkedListNext = data.list.next;
        linkedListPrev->next = linkedListNext;
        linkedListNext->prev = linkedListPrev;
    }
}
