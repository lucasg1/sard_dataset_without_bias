typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType
{
    void * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType;
void FUN2(CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType myStruct);
void FUN3()
{
    void * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType myStruct;
    data = NULL;
    data = (void *)WIDE_STRING;
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType
{
    void * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType;
void FUN2(CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType myStruct);
void FUN3()
{
    void * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType myStruct;
    data = NULL;
    data = (void *)WIDE_STRING;
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType
{
    void * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType;
void FUN2(CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType myStruct)
{
    void * data = myStruct.structFirst;
    {
<START>
        size_t dataLen = strlen((char *)data);
<END>
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy(dest, data);
        printLine((char *)dest);
    }
}
