int FUN0(int data)
{
    data = 7;
    return data;
}
int FUN1(int data)
{
    data = RAND32();
    return data;
}
int FUN0(int data);
void FUN3()
{
    int data;
    data = -1;
    data = FUN0(data);
    {
        int i;
        int * buffer = (int *)malloc(10 * sizeof(int));
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
int FUN1(int data);
void FUN5()
{
    int data;
    data = -1;
    data = FUN1(data);
    {
        int i;
        int * buffer = (int *)malloc(10 * sizeof(int));
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
