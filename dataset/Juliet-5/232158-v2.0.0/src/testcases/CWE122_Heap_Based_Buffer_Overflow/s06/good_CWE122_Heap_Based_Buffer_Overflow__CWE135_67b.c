typedef struct _CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType
{
    void * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType;
void FUN5(CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType myStruct);
void FUN6()
{
    void * data;
    CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType myStruct;
    data = NULL;
    {
        char * VAR0 = (char *)malloc(50*sizeof(char));
        if (VAR0 == NULL) {exit(-1);}
        memset(VAR0, 'A', 50-1);
        VAR0[50-1] = '\0';
        data = (void *)VAR0;
    }
    myStruct.structFirst = data;
    FUN5(myStruct);
}
void FUN7(CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType myStruct);
void FUN8()
{
    void * data;
    CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType myStruct;
    data = NULL;
    {
        wchar_t * dataBadBuffer = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (dataBadBuffer == NULL) {exit(-1);}
        wmemset(dataBadBuffer, L'A', 50-1);
        dataBadBuffer[50-1] = L'\0';
        data = (void *)dataBadBuffer;
    }
    myStruct.structFirst = data;
    FUN7(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType
{
    void * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType;
void FUN5(CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType myStruct);
void FUN6()
{
    void * data;
    CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType myStruct;
    data = NULL;
    {
        char * VAR0 = (char *)malloc(50*sizeof(char));
        if (VAR0 == NULL) {exit(-1);}
        memset(VAR0, 'A', 50-1);
        VAR0[50-1] = '\0';
        data = (void *)VAR0;
    }
    myStruct.structFirst = data;
    FUN5(myStruct);
}
void FUN7(CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType myStruct);
void FUN8()
{
    void * data;
    CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType myStruct;
    data = NULL;
    {
        wchar_t * dataBadBuffer = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (dataBadBuffer == NULL) {exit(-1);}
        wmemset(dataBadBuffer, L'A', 50-1);
        dataBadBuffer[50-1] = L'\0';
        data = (void *)dataBadBuffer;
    }
    myStruct.structFirst = data;
    FUN7(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType
{
    void * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType;
void FUN5(CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType myStruct)
{
    void * data = myStruct.structFirst;
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)calloc(dataLen+1, 1);
        if (dest == NULL) {exit(-1);}
        (void)strcpy(dest, data);
        printLine((char *)dest);
        free(dest);
    }
}
void FUN7(CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType myStruct)
{
    void * data = myStruct.structFirst;
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
        if (dest == NULL) {exit(-1);}
        (void)wcscpy(dest, data);
        printWLine((wchar_t *)dest);
        free(dest);
    }
}
