typedef union
{
    long * unionFirst;
    long * unionSecond;
} CWE590_Free_Memory_Not_on_Heap__free_long_static_34_unionType;
void FUN0()
{
    long * data;
    CWE590_Free_Memory_Not_on_Heap__free_long_static_34_unionType myUnion;
    data = NULL; 
    {
        long * dataBuffer = (long *)malloc(100*sizeof(long));
        if (dataBuffer == NULL)
        {
            printLine("malloc() failed");
            exit(1);
        }
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5L;
            }
        }
        data = dataBuffer;
    }
    myUnion.unionFirst = data;
    {
        long * data = myUnion.unionSecond;
        printLongLine(data[0]);
        free(data);
    }
}
