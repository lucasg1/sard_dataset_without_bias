typedef struct _CWE127_Buffer_Underread__CWE839_negative_67_structType
{
    int structFirst;
} CWE127_Buffer_Underread__CWE839_negative_67_structType;
void FUN0(CWE127_Buffer_Underread__CWE839_negative_67_structType myStruct);
void FUN1()
{
    int data;
    CWE127_Buffer_Underread__CWE839_negative_67_structType myStruct;
    data = -1;
    data = 7;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE127_Buffer_Underread__CWE839_negative_67_structType myStruct);
void FUN3()
{
    int data;
    CWE127_Buffer_Underread__CWE839_negative_67_structType myStruct;
    data = -1;
    data = -5;
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE127_Buffer_Underread__CWE839_negative_67_structType
{
    int structFirst;
} CWE127_Buffer_Underread__CWE839_negative_67_structType;
void FUN0(CWE127_Buffer_Underread__CWE839_negative_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
        int buffer[10] = { 0 };
        if (data < 10)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is too big.");
        }
    }
}
void FUN2(CWE127_Buffer_Underread__CWE839_negative_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
        int buffer[10] = { 0 };
        if (data >= 0 && data < (10))
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
    }
}
