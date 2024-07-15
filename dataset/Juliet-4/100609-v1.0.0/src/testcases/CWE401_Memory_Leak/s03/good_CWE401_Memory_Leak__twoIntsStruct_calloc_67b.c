typedef struct _CWE401_Memory_Leak__twoIntsStruct_calloc_67_structType
{
    twoIntsStruct * structFirst;
} CWE401_Memory_Leak__twoIntsStruct_calloc_67_structType;
void FUN0(CWE401_Memory_Leak__twoIntsStruct_calloc_67_structType myStruct);
void FUN1()
{
    twoIntsStruct * data;
    CWE401_Memory_Leak__twoIntsStruct_calloc_67_structType myStruct;
    data = NULL;
    data = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE401_Memory_Leak__twoIntsStruct_calloc_67_structType myStruct);
void FUN3()
{
    twoIntsStruct * data;
    CWE401_Memory_Leak__twoIntsStruct_calloc_67_structType myStruct;
    data = NULL;
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE401_Memory_Leak__twoIntsStruct_calloc_67_structType
{
    twoIntsStruct * structFirst;
} CWE401_Memory_Leak__twoIntsStruct_calloc_67_structType;
void FUN0(CWE401_Memory_Leak__twoIntsStruct_calloc_67_structType myStruct)
{
    twoIntsStruct * data = myStruct.structFirst;
    ; 
}
void FUN2(CWE401_Memory_Leak__twoIntsStruct_calloc_67_structType myStruct)
{
    twoIntsStruct * data = myStruct.structFirst;
    free(data);
}
