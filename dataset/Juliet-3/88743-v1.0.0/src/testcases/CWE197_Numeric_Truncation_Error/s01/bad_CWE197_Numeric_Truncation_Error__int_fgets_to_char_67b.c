typedef struct _CWE197_Numeric_Truncation_Error__int_fgets_to_char_67_structType
{
    int structFirst;
} CWE197_Numeric_Truncation_Error__int_fgets_to_char_67_structType;
void FUN0(CWE197_Numeric_Truncation_Error__int_fgets_to_char_67_structType myStruct);
void FUN1()
{
    int data;
    CWE197_Numeric_Truncation_Error__int_fgets_to_char_67_structType myStruct;
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
typedef struct _CWE197_Numeric_Truncation_Error__int_fgets_to_char_67_structType
{
    int structFirst;
} CWE197_Numeric_Truncation_Error__int_fgets_to_char_67_structType;
void FUN0(CWE197_Numeric_Truncation_Error__int_fgets_to_char_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
