typedef struct _CWE590_Free_Memory_Not_on_Heap__free_struct_declare_67_structType
{
    twoIntsStruct * structFirst;
} CWE590_Free_Memory_Not_on_Heap__free_struct_declare_67_structType;
void FUN0(CWE590_Free_Memory_Not_on_Heap__free_struct_declare_67_structType myStruct);
void FUN1()
{
    twoIntsStruct * data;
    CWE590_Free_Memory_Not_on_Heap__free_struct_declare_67_structType myStruct;
    data = NULL; 
    {
        twoIntsStruct dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i].intOne = 1;
                dataBuffer[i].intTwo = 1;
            }
        }
        data = dataBuffer;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE590_Free_Memory_Not_on_Heap__free_struct_declare_67_structType
{
    twoIntsStruct * structFirst;
} CWE590_Free_Memory_Not_on_Heap__free_struct_declare_67_structType;
void FUN0(CWE590_Free_Memory_Not_on_Heap__free_struct_declare_67_structType myStruct)
{
    twoIntsStruct * data = myStruct.structFirst;
    printStructLine(&data[0]);
<START>
    free(data);
<END>
}
