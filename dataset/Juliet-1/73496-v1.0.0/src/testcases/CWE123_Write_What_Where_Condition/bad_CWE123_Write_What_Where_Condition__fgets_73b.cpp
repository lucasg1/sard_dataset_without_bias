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
void FUN0(list<FUN1Struct> dataList);
void FUN1()
{
    FUN1Struct data;
    list<FUN1Struct> dataList;
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
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
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
void FUN0(list<FUN1Struct> dataList)
{
    FUN1Struct data = dataList.back();
    linkedListPrev = data.list.prev;
    linkedListNext = data.list.next;
<START>
    linkedListPrev->next = linkedListNext;
    linkedListNext->prev = linkedListPrev;
<END>
}
} 
