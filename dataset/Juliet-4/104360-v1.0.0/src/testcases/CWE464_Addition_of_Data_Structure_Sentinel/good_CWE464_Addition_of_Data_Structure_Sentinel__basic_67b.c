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
    data = 'a';
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
        charArraySink[1] = data;
        charArraySink[2] = 'z';
        charArraySink[3] = '\0';
        printLine(charArraySink);
    }
}
