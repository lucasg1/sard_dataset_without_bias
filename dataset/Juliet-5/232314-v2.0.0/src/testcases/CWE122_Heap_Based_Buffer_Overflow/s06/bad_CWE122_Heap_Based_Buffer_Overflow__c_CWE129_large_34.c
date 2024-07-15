typedef union
{
    int unionFirst;
    int unionSecond;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_unionType;
void FUN0()
{
    int data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_unionType myUnion;
    data = -1;
    data = 10;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
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
}
