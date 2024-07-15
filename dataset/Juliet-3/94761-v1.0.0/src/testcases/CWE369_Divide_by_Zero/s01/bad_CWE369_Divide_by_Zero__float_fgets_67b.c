typedef struct _CWE369_Divide_by_Zero__float_fgets_67_structType
{
    float structFirst;
} CWE369_Divide_by_Zero__float_fgets_67_structType;
void FUN0(CWE369_Divide_by_Zero__float_fgets_67_structType myStruct);
void FUN1()
{
    float data;
    CWE369_Divide_by_Zero__float_fgets_67_structType myStruct;
    data = 0.0F;
    {
        char inputBuffer[CHAR_ARRAY_SIZE];
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = (float)atof(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE369_Divide_by_Zero__float_fgets_67_structType
{
    float structFirst;
} CWE369_Divide_by_Zero__float_fgets_67_structType;
void FUN0(CWE369_Divide_by_Zero__float_fgets_67_structType myStruct)
{
    float data = myStruct.structFirst;
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
