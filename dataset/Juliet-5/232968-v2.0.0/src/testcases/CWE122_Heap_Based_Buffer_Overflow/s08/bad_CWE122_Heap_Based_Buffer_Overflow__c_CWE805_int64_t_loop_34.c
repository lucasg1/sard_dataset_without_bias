typedef union
{
    int64_t * unionFirst;
    int64_t * unionSecond;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_34_unionType;
void FUN0()
{
    int64_t * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_34_unionType myUnion;
    data = NULL;
    data = (int64_t *)malloc(50*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
        {
            int64_t source[100] = {0}; 
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
<START>
                    data[i] = source[i];
<END>
                }
                printLongLongLine(data[0]);
                free(data);
            }
        }
    }
}
