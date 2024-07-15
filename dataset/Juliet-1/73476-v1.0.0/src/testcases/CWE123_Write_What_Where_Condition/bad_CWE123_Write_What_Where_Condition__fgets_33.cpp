typedef struct _linkedList
{
    struct _linkedList *next;
    struct _linkedList *prev;
} linkedList;
typedef struct _FUN0Struct
{
    linkedList list;
} FUN0Struct;
static linkedList *linkedListPrev, *linkedListNext;
namespace NAMESPACE0
{
void FUN0()
{
    FUN0Struct data;
    FUN0Struct &dataRef = data;
    linkedList head = { &head, &head };
    data.list.next = head.next;
    data.list.prev = head.prev;
    head.next = &data.list;
    head.prev = &data.list;
    if (fgets((char*)&data, sizeof(data), stdin) == NULL)
    {
        printLine("fgets failed!");
        exit(1);
    }
    {
        FUN0Struct data = dataRef;
        linkedListPrev = data.list.prev;
        linkedListNext = data.list.next;
<START>
        linkedListPrev->next = linkedListNext;
        linkedListNext->prev = linkedListPrev;
<END>
    }
}
} 
