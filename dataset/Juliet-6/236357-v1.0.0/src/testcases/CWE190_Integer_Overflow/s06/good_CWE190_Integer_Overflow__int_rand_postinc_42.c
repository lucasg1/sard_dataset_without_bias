static int FUN0(int data)
{
    data = 2;
    return data;
}
void FUN1()
{
    int data;
    data = 0;
    data = FUN0(data);
    {
        data++;
        int result = data;
        printIntLine(result);
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
    data = 0;
    data = FUN2(data);
    if (data < INT_MAX)
    {
        data++;
        int result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
