namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
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
    {
        int * data = dataRef;
        printIntLine(data[0]);
        free(data);
    }
}
} 
