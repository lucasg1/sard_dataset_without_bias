typedef struct _CWE401_Memory_Leak__twoIntsStruct_realloc_67_structType
{
    twoIntsStruct * structFirst;
} CWE401_Memory_Leak__twoIntsStruct_realloc_67_structType;
void FUN0(CWE401_Memory_Leak__twoIntsStruct_realloc_67_structType myStruct);
void FUN1()
{
    twoIntsStruct * data;
    CWE401_Memory_Leak__twoIntsStruct_realloc_67_structType myStruct;
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE401_Memory_Leak__twoIntsStruct_realloc_67_structType
{
    twoIntsStruct * structFirst;
} CWE401_Memory_Leak__twoIntsStruct_realloc_67_structType;
void FUN0(CWE401_Memory_Leak__twoIntsStruct_realloc_67_structType myStruct)
{
    twoIntsStruct * data = myStruct.structFirst;
<START>
<END>
    ; 
}
