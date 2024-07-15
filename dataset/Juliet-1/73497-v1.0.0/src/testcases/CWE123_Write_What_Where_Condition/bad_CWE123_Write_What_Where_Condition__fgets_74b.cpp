typedef struct _linkedList
{
    struct _linkedList *next;
    struct _linkedList *prev;
} linkedList;
typedef struct _FUN1Struct
{
    linkedList list;
} FUN1Struct;
static linkedList *linkedListPrev, *linkedListNext;
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, FUN1Struct> dataMap);
void FUN1()
{
    FUN1Struct data;
    map<int, FUN1Struct> dataMap;
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
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
typedef struct _linkedList
{
    struct _linkedList *next;
    struct _linkedList *prev;
} linkedList;
typedef struct _FUN1Struct
{
    linkedList list;
} FUN1Struct;
static linkedList *linkedListPrev, *linkedListNext;
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, FUN1Struct> dataMap)
{
    FUN1Struct data = dataMap[2];
    linkedListPrev = data.list.prev;
    linkedListNext = data.list.next;
<START>
    linkedListPrev->next = linkedListNext;
    linkedListNext->prev = linkedListPrev;
<END>
}
} 
