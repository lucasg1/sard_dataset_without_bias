typedef struct _CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67_structType
{
    struct _twoIntsStruct * structFirst;
} CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67_structType;
void FUN0(CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67_structType myStruct);
void FUN1()
{
    struct _twoIntsStruct * data;
    CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67_structType myStruct;
    data = NULL;
    data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67_structType
{
    struct _twoIntsStruct * structFirst;
} CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67_structType;
void FUN0(CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67_structType myStruct)
{
    struct _twoIntsStruct * data = myStruct.structFirst;
<START>
<END>
    ; 
}
