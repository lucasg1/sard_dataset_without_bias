typedef struct _CWE590_Free_Memory_Not_on_Heap__free_long_static_67_structType
{
    long * structFirst;
} CWE590_Free_Memory_Not_on_Heap__free_long_static_67_structType;
void FUN0(CWE590_Free_Memory_Not_on_Heap__free_long_static_67_structType myStruct);
void FUN1()
{
    long * data;
    CWE590_Free_Memory_Not_on_Heap__free_long_static_67_structType myStruct;
    data = NULL; 
    {
        long * dataBuffer = (long *)malloc(100*sizeof(long));
        if (dataBuffer == NULL)
        {
            printLine("malloc() failed");
            exit(1);
        }
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5L;
            }
        }
        data = dataBuffer;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE590_Free_Memory_Not_on_Heap__free_long_static_67_structType
{
    long * structFirst;
} CWE590_Free_Memory_Not_on_Heap__free_long_static_67_structType;
void FUN0(CWE590_Free_Memory_Not_on_Heap__free_long_static_67_structType myStruct)
{
    long * data = myStruct.structFirst;
    printLongLine(data[0]);
    free(data);
}
