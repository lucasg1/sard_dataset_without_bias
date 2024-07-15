typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_67_structType
{
    wchar_t * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_67_structType myStruct;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    data[0] = L'\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_67_structType
{
    wchar_t * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        wcsncat(data, source, 100);
        printWLine(data);
        free(data);
    }
}
