typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_67_structType
{
    wchar_t * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_67_structType myStruct;
    data = NULL;
    data = (wchar_t *)malloc(10*sizeof(wchar_t));
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_67_structType
{
    wchar_t * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t source[10+1] = SRC_STRING;
<START>
        memmove(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
<END>
        printWLine(data);
        free(data);
    }
}
