static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    int64_t * data;
    data = NULL; 
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int64_t * dataBuffer = (int64_t *)malloc(100*sizeof(int64_t));
            if (dataBuffer == NULL)
            {
                printLine("malloc() failed");
                exit(1);
            }
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i] = 5LL;
                }
            }
            data = dataBuffer;
        }
    }
    printLongLongLine(data[0]);
    free(data);
}
void FUN3()
{
    int64_t * data;
    data = NULL; 
    if(FUN0())
    {
        {
            int64_t * dataBuffer = (int64_t *)malloc(100*sizeof(int64_t));
            if (dataBuffer == NULL)
            {
                printLine("malloc() failed");
                exit(1);
            }
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i] = 5LL;
                }
            }
            data = dataBuffer;
        }
    }
    printLongLongLine(data[0]);
    free(data);
}
