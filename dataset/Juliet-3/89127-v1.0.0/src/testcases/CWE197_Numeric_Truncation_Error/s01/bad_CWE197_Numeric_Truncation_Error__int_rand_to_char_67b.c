typedef struct _CWE197_Numeric_Truncation_Error__int_rand_to_char_67_structType
{
    int structFirst;
} CWE197_Numeric_Truncation_Error__int_rand_to_char_67_structType;
void FUN0(CWE197_Numeric_Truncation_Error__int_rand_to_char_67_structType myStruct);
void FUN1()
{
    int data;
    CWE197_Numeric_Truncation_Error__int_rand_to_char_67_structType myStruct;
    data = -1;
    data = RAND32();
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE197_Numeric_Truncation_Error__int_rand_to_char_67_structType
{
    int structFirst;
} CWE197_Numeric_Truncation_Error__int_rand_to_char_67_structType;
void FUN0(CWE197_Numeric_Truncation_Error__int_rand_to_char_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
