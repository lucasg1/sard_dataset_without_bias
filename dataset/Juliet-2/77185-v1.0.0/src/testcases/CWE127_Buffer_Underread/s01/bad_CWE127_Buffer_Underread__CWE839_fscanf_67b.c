typedef struct _CWE127_Buffer_Underread__CWE839_fscanf_67_structType
{
    int structFirst;
} CWE127_Buffer_Underread__CWE839_fscanf_67_structType;
void FUN0(CWE127_Buffer_Underread__CWE839_fscanf_67_structType myStruct);
void FUN1()
{
    int data;
    CWE127_Buffer_Underread__CWE839_fscanf_67_structType myStruct;
    data = -1;
    fscanf(stdin, "%d", &data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE127_Buffer_Underread__CWE839_fscanf_67_structType
{
    int structFirst;
} CWE127_Buffer_Underread__CWE839_fscanf_67_structType;
void FUN0(CWE127_Buffer_Underread__CWE839_fscanf_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
        int buffer[10] = { 0 };
        if (data < 10)
        {
<START>
            printIntLine(buffer[data]);
<END>
        }
        else
        {
            printLine("ERROR: Array index is too big.");
        }
    }
}
