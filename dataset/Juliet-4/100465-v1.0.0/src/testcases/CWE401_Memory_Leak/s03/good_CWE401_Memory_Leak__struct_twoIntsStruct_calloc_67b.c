typedef struct _CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67_structType
{
    struct _twoIntsStruct * structFirst;
} CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67_structType;
void FUN0(CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67_structType myStruct);
void FUN1()
{
    struct _twoIntsStruct * data;
    CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67_structType myStruct;
    data = NULL;
    data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67_structType myStruct);
void FUN3()
{
    struct _twoIntsStruct * data;
    CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67_structType myStruct;
    data = NULL;
    data = (struct _twoIntsStruct *)calloc(100, sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67_structType
{
    struct _twoIntsStruct * structFirst;
} CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67_structType;
void FUN0(CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67_structType myStruct)
{
    struct _twoIntsStruct * data = myStruct.structFirst;
    ; 
}
void FUN2(CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67_structType myStruct)
{
    struct _twoIntsStruct * data = myStruct.structFirst;
    free(data);
}
