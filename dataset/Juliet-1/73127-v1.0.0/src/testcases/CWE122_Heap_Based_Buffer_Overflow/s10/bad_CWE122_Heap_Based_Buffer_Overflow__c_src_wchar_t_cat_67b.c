typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_67_structType
{
    wchar_t * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_67_structType myStruct;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_67_structType
{
    wchar_t * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t dest[50] = L"";
<START>
        wcscat(dest, data);
<END>
        printWLine(data);
        free(data);
    }
}
