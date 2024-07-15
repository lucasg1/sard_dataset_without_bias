typedef struct _CWE690_NULL_Deref_From_Return__struct_realloc_67_structType
{
    twoIntsStruct * structFirst;
} CWE690_NULL_Deref_From_Return__struct_realloc_67_structType;
void FUN0(CWE690_NULL_Deref_From_Return__struct_realloc_67_structType myStruct);
void FUN1()
{
    twoIntsStruct * data;
    CWE690_NULL_Deref_From_Return__struct_realloc_67_structType myStruct;
    data = NULL; 
    data = (twoIntsStruct *)realloc(data, 1*sizeof(twoIntsStruct));
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE690_NULL_Deref_From_Return__struct_realloc_67_structType
{
    twoIntsStruct * structFirst;
} CWE690_NULL_Deref_From_Return__struct_realloc_67_structType;
void FUN0(CWE690_NULL_Deref_From_Return__struct_realloc_67_structType myStruct)
{
    twoIntsStruct * data = myStruct.structFirst;
    if (data != NULL)
    {
        data[0].intOne = 1;
        data[0].intTwo = 1;
        printStructLine(&data[0]);
        free(data);
    }
}
