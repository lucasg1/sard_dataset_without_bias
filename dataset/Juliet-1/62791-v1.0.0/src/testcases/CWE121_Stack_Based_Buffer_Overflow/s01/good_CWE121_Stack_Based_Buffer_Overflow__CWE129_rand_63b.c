void FUN0(int * data);
void FUN1()
{
    int data;
    data = -1;
    data = 7;
    FUN0(&data);
}
void FUN2(int * data);
void FUN3()
{
    int data;
    data = -1;
    data = RAND32();
    FUN2(&data);
}
void FUN0(int * dataPtr)
{
    int data = *dataPtr;
    {
        int i;
        int buffer[10] = { 0 };
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
    }
}
void FUN2(int * dataPtr)
{
    int data = *dataPtr;
    {
        int i;
        int buffer[10] = { 0 };
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
    }
}
