void FUN0()
{
    int h;
    int * data;
    data = NULL; 
    for(h = 0; h < 1; h++)
    {
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
    }
    printIntLine(data[0]);
    free(data);
}
