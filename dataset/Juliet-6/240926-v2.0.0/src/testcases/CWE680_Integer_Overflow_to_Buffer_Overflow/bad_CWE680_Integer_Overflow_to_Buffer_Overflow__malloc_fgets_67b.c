typedef struct _CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fgets_67_structType
{
    int structFirst;
} CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fgets_67_structType;
void FUN0(CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fgets_67_structType myStruct);
void FUN1()
{
    int data;
    CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fgets_67_structType myStruct;
    data = -1;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fgets_67_structType
{
    int structFirst;
} CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fgets_67_structType;
void FUN0(CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fgets_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
        size_t i;
        int *intPointer;
        intPointer = (int*)malloc(data * sizeof(int));
        if (intPointer == NULL) {exit(-1);}
        for (i = 0; i < (size_t)data; i++)
        {
<START>
            intPointer[i] = 0; 
<END>
        }
        printIntLine(intPointer[0]);
        free(intPointer);
    }
}
