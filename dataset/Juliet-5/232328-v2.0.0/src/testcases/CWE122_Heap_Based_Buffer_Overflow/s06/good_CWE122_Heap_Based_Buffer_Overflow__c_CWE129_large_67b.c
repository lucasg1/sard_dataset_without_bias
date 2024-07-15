typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_structType
{
    int structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_structType myStruct);
void FUN1()
{
    int data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_structType myStruct;
    data = -1;
    data = 7;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_structType myStruct);
void FUN3()
{
    int data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_structType myStruct;
    data = -1;
    data = 10;
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_structType
{
    int structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_structType myStruct)
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
            buffer[data] = 1;
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
void FUN2(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_structType myStruct)
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
        if (data >= 0 && data < (10))
        {
            buffer[data] = 1;
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
        free(buffer);
    }
}
