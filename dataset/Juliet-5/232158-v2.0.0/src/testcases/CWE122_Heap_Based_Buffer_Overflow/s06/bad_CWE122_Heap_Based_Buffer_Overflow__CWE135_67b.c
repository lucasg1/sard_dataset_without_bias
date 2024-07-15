typedef struct _CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType
{
    void * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType;
void FUN2(CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType myStruct);
void FUN3()
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
    FUN2(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType
{
    void * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType;
void FUN2(CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType myStruct);
void FUN3()
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
    FUN2(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType
{
    void * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType;
void FUN2(CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType myStruct)
{
    void * data = myStruct.structFirst;
    {
<START>
        size_t dataLen = strlen((char *)data);
<END>
        void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
        if (dest == NULL) {exit(-1);}
        (void)wcscpy(dest, data);
        printLine((char *)dest);
        free(dest);
    }
}
