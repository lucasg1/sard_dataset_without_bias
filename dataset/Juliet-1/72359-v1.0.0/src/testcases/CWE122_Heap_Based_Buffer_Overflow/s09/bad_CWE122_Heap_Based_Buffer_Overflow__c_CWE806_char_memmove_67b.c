typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_67_structType
{
    char * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_67_structType myStruct;
    data = (char *)malloc(100*sizeof(char));
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_67_structType
{
    char * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char dest[50] = "";
<START>
        memmove(dest, data, strlen(data)*sizeof(char));
<END>
        dest[50-1] = '\0'; 
        printLine(data);
        free(data);
    }
}
