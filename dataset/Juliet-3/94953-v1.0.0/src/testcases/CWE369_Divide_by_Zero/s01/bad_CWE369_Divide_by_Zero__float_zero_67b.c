typedef struct _CWE369_Divide_by_Zero__float_zero_67_structType
{
    float structFirst;
} CWE369_Divide_by_Zero__float_zero_67_structType;
void FUN0(CWE369_Divide_by_Zero__float_zero_67_structType myStruct);
void FUN1()
{
    float data;
    CWE369_Divide_by_Zero__float_zero_67_structType myStruct;
    data = 0.0F;
    data = 0.0F;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE369_Divide_by_Zero__float_zero_67_structType
{
    float structFirst;
} CWE369_Divide_by_Zero__float_zero_67_structType;
void FUN0(CWE369_Divide_by_Zero__float_zero_67_structType myStruct)
{
    float data = myStruct.structFirst;
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
