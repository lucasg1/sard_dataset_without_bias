typedef struct _CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_67_structType
{
    int64_t * structFirst;
} CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_67_structType;
void FUN0(CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_67_structType myStruct);
void FUN1()
{
    int64_t * data;
    CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_67_structType myStruct;
    data = NULL; 
    {
        int64_t * dataBuffer = (int64_t *)malloc(100*sizeof(int64_t));
        if (dataBuffer == NULL)
        {
            printLine("malloc() failed");
            exit(1);
        }
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5LL;
            }
        }
        data = dataBuffer;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_67_structType
{
    int64_t * structFirst;
} CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_67_structType;
void FUN0(CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_67_structType myStruct)
{
    int64_t * data = myStruct.structFirst;
    printLongLongLine(data[0]);
    free(data);
}
