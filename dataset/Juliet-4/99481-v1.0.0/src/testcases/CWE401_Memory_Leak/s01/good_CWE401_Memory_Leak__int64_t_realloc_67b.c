typedef struct _CWE401_Memory_Leak__int64_t_realloc_67_structType
{
    int64_t * structFirst;
} CWE401_Memory_Leak__int64_t_realloc_67_structType;
void FUN0(CWE401_Memory_Leak__int64_t_realloc_67_structType myStruct);
void FUN1()
{
    int64_t * data;
    CWE401_Memory_Leak__int64_t_realloc_67_structType myStruct;
    data = NULL;
    data = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE401_Memory_Leak__int64_t_realloc_67_structType myStruct);
void FUN3()
{
    int64_t * data;
    CWE401_Memory_Leak__int64_t_realloc_67_structType myStruct;
    data = NULL;
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE401_Memory_Leak__int64_t_realloc_67_structType
{
    int64_t * structFirst;
} CWE401_Memory_Leak__int64_t_realloc_67_structType;
void FUN0(CWE401_Memory_Leak__int64_t_realloc_67_structType myStruct)
{
    int64_t * data = myStruct.structFirst;
    ; 
}
void FUN2(CWE401_Memory_Leak__int64_t_realloc_67_structType myStruct)
{
    int64_t * data = myStruct.structFirst;
    free(data);
}
