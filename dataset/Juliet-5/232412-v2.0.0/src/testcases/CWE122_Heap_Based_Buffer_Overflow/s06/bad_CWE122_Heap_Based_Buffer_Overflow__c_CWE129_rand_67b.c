typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_67_structType
{
    int structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_67_structType myStruct);
void FUN1()
{
    int data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_67_structType myStruct;
    data = -1;
    data = RAND32();
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_67_structType
{
    int structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
        int i;
        int * buffer = (int *)malloc(10 * sizeof(int));
        if (buffer == NULL) {exit(-1);}
        for (i = 0; i < 10; i++)
        {
            buffer[i] = 0;
        }
        if (data >= 0)
        {
<START>
            buffer[data] = 1;
<END>
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
        free(buffer);
    }
}
