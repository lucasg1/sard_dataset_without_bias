typedef struct _CWE843_Type_Confusion__short_67_structType
{
    void * structFirst;
} CWE843_Type_Confusion__short_67_structType;
void FUN0(CWE843_Type_Confusion__short_67_structType myStruct);
void FUN1()
{
    void * data;
    CWE843_Type_Confusion__short_67_structType myStruct;
    data = NULL;
    {
        int intBuffer = 8;
        data = &intBuffer;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE843_Type_Confusion__short_67_structType
{
    void * structFirst;
} CWE843_Type_Confusion__short_67_structType;
void FUN0(CWE843_Type_Confusion__short_67_structType myStruct)
{
    void * data = myStruct.structFirst;
    printIntLine(*((int*)data));
}
