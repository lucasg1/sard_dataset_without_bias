void FUN0(int dataArray[]);
void FUN1()
{
    int data;
    int dataArray[5];
    data = -1;
    data = 7;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(int dataArray[]);
void FUN3()
{
    int data;
    int dataArray[5];
    data = -1;
    data = 10;
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(int dataArray[])
{
    int data = dataArray[2];
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
            buffer[data] = 1;
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
void FUN2(int dataArray[])
{
    int data = dataArray[2];
    {
        int i;
        int * buffer = (int *)malloc(10 * sizeof(int));
        if (buffer == NULL) {exit(-1);}
        for (i = 0; i < 10; i++)
        {
            buffer[i] = 0;
        }
        if (data >= 0 && data < (10))
        {
            buffer[data] = 1;
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
        free(buffer);
    }
}
