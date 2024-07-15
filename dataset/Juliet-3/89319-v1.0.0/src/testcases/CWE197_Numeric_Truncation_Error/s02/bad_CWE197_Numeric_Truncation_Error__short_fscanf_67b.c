typedef struct _CWE197_Numeric_Truncation_Error__short_fscanf_67_structType
{
    short structFirst;
} CWE197_Numeric_Truncation_Error__short_fscanf_67_structType;
void FUN0(CWE197_Numeric_Truncation_Error__short_fscanf_67_structType myStruct);
void FUN1()
{
    short data;
    CWE197_Numeric_Truncation_Error__short_fscanf_67_structType myStruct;
    data = -1;
    fscanf (stdin, "%hd", &data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE197_Numeric_Truncation_Error__short_fscanf_67_structType
{
    short structFirst;
} CWE197_Numeric_Truncation_Error__short_fscanf_67_structType;
void FUN0(CWE197_Numeric_Truncation_Error__short_fscanf_67_structType myStruct)
{
    short data = myStruct.structFirst;
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
