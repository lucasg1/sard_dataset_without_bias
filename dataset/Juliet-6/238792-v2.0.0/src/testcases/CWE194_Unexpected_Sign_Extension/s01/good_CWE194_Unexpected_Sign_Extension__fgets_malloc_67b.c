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
    data = 100-1;
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
        char * dataBuffer = (char *)malloc(data);
        if (dataBuffer == NULL) {exit(-1);}
        memset(dataBuffer, 'A', data-1);
        dataBuffer[data-1] = '\0';
        printLine(dataBuffer);
        free(dataBuffer);
    }
}
