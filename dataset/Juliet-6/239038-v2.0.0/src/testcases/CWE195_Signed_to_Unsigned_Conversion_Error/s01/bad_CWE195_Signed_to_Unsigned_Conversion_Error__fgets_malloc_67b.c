typedef struct _CWE195_Signed_to_Unsigned_Conversion_Error__fgets_malloc_67_structType
{
    int structFirst;
} CWE195_Signed_to_Unsigned_Conversion_Error__fgets_malloc_67_structType;
void FUN0(CWE195_Signed_to_Unsigned_Conversion_Error__fgets_malloc_67_structType myStruct);
void FUN1()
{
    int data;
    CWE195_Signed_to_Unsigned_Conversion_Error__fgets_malloc_67_structType myStruct;
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
typedef struct _CWE195_Signed_to_Unsigned_Conversion_Error__fgets_malloc_67_structType
{
    int structFirst;
} CWE195_Signed_to_Unsigned_Conversion_Error__fgets_malloc_67_structType;
void FUN0(CWE195_Signed_to_Unsigned_Conversion_Error__fgets_malloc_67_structType myStruct)
{
    int data = myStruct.structFirst;
    if (data < 100)
    {
<START>
        char * dataBuffer = (char *)malloc(data);
<END>
        if (dataBuffer == NULL) {exit(-1);}
        memset(dataBuffer, 'A', data-1);
        dataBuffer[data-1] = '\0';
        printLine(dataBuffer);
        free(dataBuffer);
    }
}
