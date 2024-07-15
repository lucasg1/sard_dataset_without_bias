void FUN0(int data)
{
    {
        int buffer[10] = { 0 };
        if (data >= 0)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is negative");
        }
    }
}
void FUN1()
{
    int data;
    data = -1;
    data = 7;
    FUN0(data);
}
void FUN2(int data)
{
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
void FUN3()
{
    int data;
    data = -1;
    fscanf(stdin, "%d", &data);
    FUN2(data);
}
