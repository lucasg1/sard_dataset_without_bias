typedef struct _CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_67_structType
{
    int structFirst;
} CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_67_structType;
void FUN0(CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_67_structType myStruct);
void FUN1()
{
    int data;
    CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_67_structType myStruct;
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
typedef struct _CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_67_structType
{
    int structFirst;
} CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_67_structType;
void FUN0(CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
<START>
            memcpy(dest, source, data);
<END>
            dest[data] = '\0'; 
        }
        printLine(dest);
    }
}
