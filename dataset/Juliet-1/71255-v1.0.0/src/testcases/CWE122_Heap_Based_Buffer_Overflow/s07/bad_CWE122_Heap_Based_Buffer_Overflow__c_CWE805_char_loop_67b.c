typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_67_structType
{
    char * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_67_structType myStruct;
    data = NULL;
    data = (char *)malloc(50*sizeof(char));
    data[0] = '\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_67_structType
{
    char * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        size_t i;
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        for (i = 0; i < 100; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        data[100-1] = '\0'; 
        printLine(data);
        free(data);
    }
}
