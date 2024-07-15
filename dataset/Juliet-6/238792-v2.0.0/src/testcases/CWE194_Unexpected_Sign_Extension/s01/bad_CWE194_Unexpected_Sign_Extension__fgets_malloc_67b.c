typedef struct _CWE194_Unexpected_Sign_Extension__fgets_malloc_67_structType
{
    short structFirst;
} CWE194_Unexpected_Sign_Extension__fgets_malloc_67_structType;
void FUN0(CWE194_Unexpected_Sign_Extension__fgets_malloc_67_structType myStruct);
void FUN1()
{
    short data;
    CWE194_Unexpected_Sign_Extension__fgets_malloc_67_structType myStruct;
    data = 0;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = (short)atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE194_Unexpected_Sign_Extension__fgets_malloc_67_structType
{
    short structFirst;
} CWE194_Unexpected_Sign_Extension__fgets_malloc_67_structType;
void FUN0(CWE194_Unexpected_Sign_Extension__fgets_malloc_67_structType myStruct)
{
    short data = myStruct.structFirst;
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
