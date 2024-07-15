typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_67_structType
{
    int * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_67_structType myStruct);
void FUN1()
{
    int * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_67_structType myStruct;
    data = NULL;
    data = (int *)malloc(50*sizeof(int));
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_67_structType
{
    int * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_67_structType myStruct)
{
    int * data = myStruct.structFirst;
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            printIntLine(data[0]);
            free(data);
        }
    }
}
