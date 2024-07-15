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
        int * dataBuffer = (int *)malloc(100*sizeof(int));
        if (dataBuffer == NULL)
        {
            printLine("malloc() failed");
            exit(1);
        }
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
        free(data);
    }
}
