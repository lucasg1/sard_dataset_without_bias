typedef struct _CWE464_Addition_of_Data_Structure_Sentinel__basic_67_structType
{
    char structFirst;
} CWE464_Addition_of_Data_Structure_Sentinel__basic_67_structType;
void FUN0(CWE464_Addition_of_Data_Structure_Sentinel__basic_67_structType myStruct);
void FUN1()
{
    char data;
    CWE464_Addition_of_Data_Structure_Sentinel__basic_67_structType myStruct;
    data = ' ';
    {
        char charArraySource[2];
        charArraySource[0] = (char)getc(stdin);
        charArraySource[1] = '\0';
        data = (char)atoi(charArraySource);
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE464_Addition_of_Data_Structure_Sentinel__basic_67_structType
{
    char structFirst;
} CWE464_Addition_of_Data_Structure_Sentinel__basic_67_structType;
void FUN0(CWE464_Addition_of_Data_Structure_Sentinel__basic_67_structType myStruct)
{
    char data = myStruct.structFirst;
    {
        char charArraySink[4];
        charArraySink[0] = 'x';
<START>
        charArraySink[1] = data;
<END>
        charArraySink[2] = 'z';
        charArraySink[3] = '\0';
        printLine(charArraySink);
    }
}
