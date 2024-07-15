typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType
{
    void * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType;
void FUN5(CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType myStruct);
void FUN6()
{
    void * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType myStruct;
    data = NULL;
    data = (void *)CHAR_STRING;
    myStruct.structFirst = data;
    FUN5(myStruct);
}
void FUN7(CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType myStruct);
void FUN8()
{
    void * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType myStruct;
    data = NULL;
    data = (void *)WIDE_STRING;
    myStruct.structFirst = data;
    FUN7(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType
{
    void * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType;
void FUN5(CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType myStruct);
void FUN6()
{
    void * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType myStruct;
    data = NULL;
    data = (void *)CHAR_STRING;
    myStruct.structFirst = data;
    FUN5(myStruct);
}
void FUN7(CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType myStruct);
void FUN8()
{
    void * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType myStruct;
    data = NULL;
    data = (void *)WIDE_STRING;
    myStruct.structFirst = data;
    FUN7(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType
{
    void * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType;
void FUN5(CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType myStruct)
{
    void * data = myStruct.structFirst;
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * 1);
        (void)strcpy(dest, data);
        printLine((char *)dest);
    }
}
void FUN7(CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType myStruct)
{
    void * data = myStruct.structFirst;
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy(dest, data);
        printWLine((wchar_t *)dest);
    }
}
