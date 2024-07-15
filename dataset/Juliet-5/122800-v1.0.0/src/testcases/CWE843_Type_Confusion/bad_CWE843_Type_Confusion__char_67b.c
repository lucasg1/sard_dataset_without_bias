typedef struct _CWE843_Type_Confusion__char_67_structType
{
    void * structFirst;
} CWE843_Type_Confusion__char_67_structType;
void FUN0(CWE843_Type_Confusion__char_67_structType myStruct);
void FUN1()
{
    void * data;
    CWE843_Type_Confusion__char_67_structType myStruct;
    data = NULL;
    {
        char charBuffer = 'a';
        data = &charBuffer;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE843_Type_Confusion__char_67_structType
{
    void * structFirst;
} CWE843_Type_Confusion__char_67_structType;
void FUN0(CWE843_Type_Confusion__char_67_structType myStruct)
{
    void * data = myStruct.structFirst;
<START>
    printIntLine(*((int*)data));
<END>
}
