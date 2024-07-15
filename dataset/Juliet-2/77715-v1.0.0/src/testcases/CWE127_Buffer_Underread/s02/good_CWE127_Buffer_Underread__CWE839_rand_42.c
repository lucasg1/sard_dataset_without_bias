static int FUN0(int data)
{
    data = 7;
    return data;
}
void FUN1()
{
    int data;
    data = -1;
    data = FUN0(data);
    {
        int buffer[10] = { 0 };
        if (data < 10)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is too big.");
        }
    }
}
static int FUN2(int data)
{
    data = RAND32();
    return data;
}
void FUN3()
{
    int data;
    data = -1;
    data = FUN2(data);
    {
        int buffer[10] = { 0 };
        if (data >= 0 && data < (10))
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
    }
}
