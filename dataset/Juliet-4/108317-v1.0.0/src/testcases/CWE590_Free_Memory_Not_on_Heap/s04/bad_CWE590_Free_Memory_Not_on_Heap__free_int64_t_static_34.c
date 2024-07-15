typedef union
{
    int64_t * unionFirst;
    int64_t * unionSecond;
} CWE590_Free_Memory_Not_on_Heap__free_int64_t_static_34_unionType;
void FUN0()
{
    int64_t * data;
    CWE590_Free_Memory_Not_on_Heap__free_int64_t_static_34_unionType myUnion;
    data = NULL; 
    {
        static int64_t dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5LL;
            }
        }
        data = dataBuffer;
    }
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
        printLongLongLine(data[0]);
<START>
        free(data);
<END>
    }
}
