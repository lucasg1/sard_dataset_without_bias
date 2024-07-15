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
extern int VAR0;
badStruct FUN0(badStruct data)
{
    if(VAR0)
    {
        if (fgets((char*)&data, sizeof(data), stdin) == NULL)
        {
            printLine("fgets failed!");
            exit(1);
        }
    }
    return data;
}
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
int VAR0 = 0;
badStruct FUN0(badStruct data);
void FUN2()
{
    badStruct data;
    linkedList head = { &head, &head };
    data.list.next = head.next;
    data.list.prev = head.prev;
    head.next = &data.list;
    head.prev = &data.list;
    VAR0 = 1; 
    data = FUN0(data);
    linkedListPrev = data.list.prev;
    linkedListNext = data.list.next;
<START>
    linkedListPrev->next = linkedListNext;
    linkedListNext->prev = linkedListPrev;
<END>
}
