typedef struct _CWE590_Free_Memory_Not_on_Heap__free_int_alloca_67_structType
{
    int * structFirst;
} CWE590_Free_Memory_Not_on_Heap__free_int_alloca_67_structType;
void FUN0(CWE590_Free_Memory_Not_on_Heap__free_int_alloca_67_structType myStruct);
void FUN1()
{
    int * data;
    CWE590_Free_Memory_Not_on_Heap__free_int_alloca_67_structType myStruct;
    data = NULL; 
    {
        int * dataBuffer = (int *)malloc(100*sizeof(int));
        if (dataBuffer == NULL)
        {
            printLine("malloc() failed");
            exit(1);
        }
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5;
            }
        }
        data = dataBuffer;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE590_Free_Memory_Not_on_Heap__free_int_alloca_67_structType
{
    int * structFirst;
} CWE590_Free_Memory_Not_on_Heap__free_int_alloca_67_structType;
void FUN0(CWE590_Free_Memory_Not_on_Heap__free_int_alloca_67_structType myStruct)
{
    int * data = myStruct.structFirst;
    printIntLine(data[0]);
    free(data);
}
