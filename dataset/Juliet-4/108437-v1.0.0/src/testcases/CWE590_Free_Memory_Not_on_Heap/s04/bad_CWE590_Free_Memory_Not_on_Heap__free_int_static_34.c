typedef union
{
    int * unionFirst;
    int * unionSecond;
} CWE590_Free_Memory_Not_on_Heap__free_int_static_34_unionType;
void FUN0()
{
    int * data;
    CWE590_Free_Memory_Not_on_Heap__free_int_static_34_unionType myUnion;
    data = NULL; 
    {
        static int dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5;
            }
        }
        data = dataBuffer;
    }
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        printIntLine(data[0]);
<START>
        free(data);
<END>
    }
}
