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
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(FUN0Struct dataCopy);
    ~NAMESPACE0_FUN0();
private:
    FUN0Struct data;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    FUN0Struct data;
    linkedList head = { &head, &head };
    data.list.next = head.next;
    data.list.prev = head.prev;
    head.next = &data.list;
    head.prev = &data.list;
    NAMESPACE0_FUN0 * VAR2 = new NAMESPACE0_FUN0(data);
    delete VAR2;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(FUN0Struct dataCopy)
{
    data = dataCopy;
    if (fgets((char*)&data, sizeof(data), stdin) == NULL)
    {
        printLine("fgets failed!");
        exit(1);
    }
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    linkedListPrev = data.list.prev;
    linkedListNext = data.list.next;
<START>
    linkedListPrev->next = linkedListNext;
    linkedListNext->prev = linkedListPrev;
<END>
}
}
