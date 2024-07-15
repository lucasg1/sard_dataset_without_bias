typedef struct _CWE401_Memory_Leak__int64_t_malloc_67_structType
{
    int64_t * structFirst;
} CWE401_Memory_Leak__int64_t_malloc_67_structType;
void FUN0(CWE401_Memory_Leak__int64_t_malloc_67_structType myStruct);
void FUN1()
{
    int64_t * data;
    CWE401_Memory_Leak__int64_t_malloc_67_structType myStruct;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE401_Memory_Leak__int64_t_malloc_67_structType
{
    int64_t * structFirst;
} CWE401_Memory_Leak__int64_t_malloc_67_structType;
void FUN0(CWE401_Memory_Leak__int64_t_malloc_67_structType myStruct)
{
    int64_t * data = myStruct.structFirst;
<START>
<END>
    ; 
}
