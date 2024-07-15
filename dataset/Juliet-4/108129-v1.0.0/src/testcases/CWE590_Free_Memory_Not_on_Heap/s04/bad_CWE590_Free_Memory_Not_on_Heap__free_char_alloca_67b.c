typedef struct _CWE590_Free_Memory_Not_on_Heap__free_char_alloca_67_structType
{
    char * structFirst;
} CWE590_Free_Memory_Not_on_Heap__free_char_alloca_67_structType;
void FUN0(CWE590_Free_Memory_Not_on_Heap__free_char_alloca_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE590_Free_Memory_Not_on_Heap__free_char_alloca_67_structType myStruct;
    data = NULL; 
    {
        char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
        memset(dataBuffer, 'A', 100-1); 
        dataBuffer[100-1] = '\0'; 
        data = dataBuffer;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE590_Free_Memory_Not_on_Heap__free_char_alloca_67_structType
{
    char * structFirst;
} CWE590_Free_Memory_Not_on_Heap__free_char_alloca_67_structType;
void FUN0(CWE590_Free_Memory_Not_on_Heap__free_char_alloca_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    printLine(data);
<START>
    free(data);
<END>
}
