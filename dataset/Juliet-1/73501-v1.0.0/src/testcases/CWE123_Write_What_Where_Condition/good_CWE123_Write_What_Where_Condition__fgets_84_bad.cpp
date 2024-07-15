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
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(badStruct dataCopy);
    ~NAMESPACE0_FUN0();
private:
    badStruct data;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    badStruct data;
    linkedList head = { &head, &head };
    data.list.next = head.next;
    data.list.prev = head.prev;
    head.next = &data.list;
    head.prev = &data.list;
    NAMESPACE0_FUN0 * VAR2 =  new NAMESPACE0_FUN0(data);
    delete VAR2;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(badStruct dataCopy)
{
    data = dataCopy;
    ; 
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    linkedListPrev = data.list.prev;
    linkedListNext = data.list.next;
    linkedListPrev->next = linkedListNext;
    linkedListNext->prev = linkedListPrev;
}
}
