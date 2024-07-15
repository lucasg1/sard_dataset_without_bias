typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_67_structType
{
    char * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_67_structType myStruct;
    data = NULL;
    data = (char *)malloc(10*sizeof(char));
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_67_structType
{
    char * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char source[10+1] = SRC_STRING;
<START>
        memmove(data, source, (strlen(source) + 1) * sizeof(char));
<END>
        printLine(data);
        free(data);
    }
}
