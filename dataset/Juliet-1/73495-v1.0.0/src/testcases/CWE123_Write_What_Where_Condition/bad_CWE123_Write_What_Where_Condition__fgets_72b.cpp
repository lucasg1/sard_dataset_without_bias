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
void FUN0(vector<FUN1Struct> dataVector);
void FUN1()
{
    FUN1Struct data;
    vector<FUN1Struct> dataVector;
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
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
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
void FUN0(vector<FUN1Struct> dataVector)
{
    FUN1Struct data = dataVector[2];
    linkedListPrev = data.list.prev;
    linkedListNext = data.list.next;
<START>
    linkedListPrev->next = linkedListNext;
    linkedListNext->prev = linkedListPrev;
<END>
}
} 
