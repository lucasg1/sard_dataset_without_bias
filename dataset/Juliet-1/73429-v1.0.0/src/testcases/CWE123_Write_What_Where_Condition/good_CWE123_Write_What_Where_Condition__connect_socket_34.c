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
typedef union
{
    badStruct unionFirst;
    badStruct unionSecond;
} CWE123_Write_What_Where_Condition__connect_socket_34_unionType;
void FUN0()
{
    badStruct data;
    CWE123_Write_What_Where_Condition__connect_socket_34_unionType myUnion;
    linkedList head = { &head, &head };
    data.list.next = head.next;
    data.list.prev = head.prev;
    head.next = &data.list;
    head.prev = &data.list;
    ; 
    myUnion.unionFirst = data;
    {
        badStruct data = myUnion.unionSecond;
        linkedListPrev = data.list.prev;
        linkedListNext = data.list.next;
        linkedListPrev->next = linkedListNext;
        linkedListNext->prev = linkedListPrev;
    }
}
