typedef struct _linkedList
{
    struct _linkedList *next;
    struct _linkedList *prev;
} linkedList;
typedef struct _FUN2Struct
{
    linkedList list;
} FUN2Struct;
static linkedList *linkedListPrev, *linkedListNext;
namespace NAMESPACE0
{
void FUN0(FUN2Struct &data)
{
    if (fgets((char*)&data, sizeof(data), stdin) == NULL)
    {
        printLine("fgets failed!");
        exit(1);
    }
}
} 
typedef struct _linkedList
{
    struct _linkedList *next;
    struct _linkedList *prev;
} linkedList;
typedef struct _FUN2Struct
{
    linkedList list;
} FUN2Struct;
static linkedList *linkedListPrev, *linkedListNext;
namespace NAMESPACE0
{
void FUN0(FUN2Struct &data);
void FUN2()
{
    FUN2Struct data;
    linkedList head = { &head, &head };
    data.list.next = head.next;
    data.list.prev = head.prev;
    head.next = &data.list;
    head.prev = &data.list;
    FUN0(data);
    linkedListPrev = data.list.prev;
    linkedListNext = data.list.next;
<START>
    linkedListPrev->next = linkedListNext;
    linkedListNext->prev = linkedListPrev;
<END>
}
} 
