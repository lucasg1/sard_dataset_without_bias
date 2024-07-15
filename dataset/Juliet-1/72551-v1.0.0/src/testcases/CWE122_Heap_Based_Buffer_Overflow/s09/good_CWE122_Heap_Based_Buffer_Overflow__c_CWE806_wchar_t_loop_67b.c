typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_loop_67_structType
{
    wchar_t * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_loop_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_loop_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_loop_67_structType myStruct;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_loop_67_structType
{
    wchar_t * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_loop_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_loop_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t dest[50] = L"";
        size_t i, dataLen;
        dataLen = wcslen(data);
        for (i = 0; i < dataLen; i++)
        {
            dest[i] = data[i];
        }
        dest[50-1] = L'\0'; 
        printWLine(data);
        free(data);
    }
}
