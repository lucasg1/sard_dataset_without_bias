void FUN0(int data);
void FUN1()
{
    int data;
    void (*funcPtr) (int) = FUN0;
    data = -1;
    data = 7;
    funcPtr(data);
}
void FUN2(int data);
void FUN3()
{
    int data;
    void (*funcPtr) (int) = FUN2;
    data = -1;
    data = -5;
    funcPtr(data);
}
void FUN0(int data)
{
    {
        int i;
        int buffer[10] = { 0 };
        if (data < 10)
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
void FUN2(int data)
{
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
