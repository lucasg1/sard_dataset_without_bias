typedef struct _CWE124_Buffer_Underwrite__CWE839_rand_67_structType
{
    int structFirst;
} CWE124_Buffer_Underwrite__CWE839_rand_67_structType;
void FUN0(CWE124_Buffer_Underwrite__CWE839_rand_67_structType myStruct);
void FUN1()
{
    int data;
    CWE124_Buffer_Underwrite__CWE839_rand_67_structType myStruct;
    data = -1;
    data = RAND32();
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE124_Buffer_Underwrite__CWE839_rand_67_structType
{
    int structFirst;
} CWE124_Buffer_Underwrite__CWE839_rand_67_structType;
void FUN0(CWE124_Buffer_Underwrite__CWE839_rand_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
        int i;
        int buffer[10] = { 0 };
        if (data < 10)
        {
<START>
            buffer[data] = 1;
<END>
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
    }
}
