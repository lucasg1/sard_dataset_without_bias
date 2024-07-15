int FUN0(int data)
{
    data = 7;
    return data;
}
int FUN1(int data)
{
    data = 10;
    return data;
}
int FUN0(int data);
void FUN3()
{
    int data;
    data = -1;
    data = FUN0(data);
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
int FUN1(int data);
void FUN5()
{
    int data;
    data = -1;
    data = FUN1(data);
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
