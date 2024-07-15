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
typedef struct _CWE123_Write_What_Where_Condition__connect_socket_67_structType
{
    badStruct structFirst;
} CWE123_Write_What_Where_Condition__connect_socket_67_structType;
void FUN0(CWE123_Write_What_Where_Condition__connect_socket_67_structType myStruct);
void FUN1()
{
    badStruct data;
    CWE123_Write_What_Where_Condition__connect_socket_67_structType myStruct;
    linkedList head = { &head, &head };
    data.list.next = head.next;
    data.list.prev = head.prev;
    head.next = &data.list;
    head.prev = &data.list;
    ; 
    myStruct.structFirst = data;
    FUN0(myStruct);
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
typedef struct _CWE123_Write_What_Where_Condition__connect_socket_67_structType
{
    badStruct structFirst;
} CWE123_Write_What_Where_Condition__connect_socket_67_structType;
void FUN0(CWE123_Write_What_Where_Condition__connect_socket_67_structType myStruct)
{
    badStruct data = myStruct.structFirst;
    linkedListPrev = data.list.prev;
    linkedListNext = data.list.next;
    linkedListPrev->next = linkedListNext;
    linkedListNext->prev = linkedListPrev;
}
