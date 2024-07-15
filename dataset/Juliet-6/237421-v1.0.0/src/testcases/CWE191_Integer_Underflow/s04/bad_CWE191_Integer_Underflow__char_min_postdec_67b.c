typedef struct _CWE191_Integer_Underflow__char_min_postdec_67_structType
{
    char structFirst;
} CWE191_Integer_Underflow__char_min_postdec_67_structType;
void FUN0(CWE191_Integer_Underflow__char_min_postdec_67_structType myStruct);
void FUN1()
{
    char data;
    CWE191_Integer_Underflow__char_min_postdec_67_structType myStruct;
    data = ' ';
    data = CHAR_MIN;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE191_Integer_Underflow__char_min_postdec_67_structType
{
    char structFirst;
} CWE191_Integer_Underflow__char_min_postdec_67_structType;
void FUN0(CWE191_Integer_Underflow__char_min_postdec_67_structType myStruct)
{
    char data = myStruct.structFirst;
    {
<START>
        data--;
<END>
        char result = data;
        printHexCharLine(result);
    }
}
