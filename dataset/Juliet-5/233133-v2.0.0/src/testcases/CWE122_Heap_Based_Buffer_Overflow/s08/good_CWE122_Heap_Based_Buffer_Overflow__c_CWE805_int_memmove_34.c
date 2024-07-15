typedef union
{
    int * unionFirst;
    int * unionSecond;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_34_unionType;
void FUN0()
{
    int * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_34_unionType myUnion;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        {
            int source[100] = {0}; 
            memmove(data, source, 100*sizeof(int));
            printIntLine(data[0]);
            free(data);
        }
    }
}
