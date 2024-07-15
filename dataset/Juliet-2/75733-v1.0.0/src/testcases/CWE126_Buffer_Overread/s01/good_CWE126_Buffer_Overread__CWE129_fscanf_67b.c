typedef struct _CWE126_Buffer_Overread__CWE129_fscanf_67_structType
{
    int structFirst;
} CWE126_Buffer_Overread__CWE129_fscanf_67_structType;
void FUN0(CWE126_Buffer_Overread__CWE129_fscanf_67_structType myStruct);
void FUN1()
{
    int data;
    CWE126_Buffer_Overread__CWE129_fscanf_67_structType myStruct;
    data = -1;
    data = 7;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE126_Buffer_Overread__CWE129_fscanf_67_structType myStruct);
void FUN3()
{
    int data;
    CWE126_Buffer_Overread__CWE129_fscanf_67_structType myStruct;
    data = -1;
    fscanf(stdin, "%d", &data);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE126_Buffer_Overread__CWE129_fscanf_67_structType
{
    int structFirst;
} CWE126_Buffer_Overread__CWE129_fscanf_67_structType;
void FUN0(CWE126_Buffer_Overread__CWE129_fscanf_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
        int buffer[10] = { 0 };
        if (data >= 0)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is negative");
        }
    }
}
void FUN2(CWE126_Buffer_Overread__CWE129_fscanf_67_structType myStruct)
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
