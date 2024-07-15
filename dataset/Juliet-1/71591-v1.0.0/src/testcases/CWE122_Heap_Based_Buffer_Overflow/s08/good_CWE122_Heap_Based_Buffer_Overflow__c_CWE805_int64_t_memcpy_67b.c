typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_67_structType
{
    int64_t * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_67_structType myStruct);
void FUN1()
{
    int64_t * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_67_structType myStruct;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_67_structType
{
    int64_t * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_67_structType myStruct)
{
    int64_t * data = myStruct.structFirst;
    {
        int64_t source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
        free(data);
    }
}
