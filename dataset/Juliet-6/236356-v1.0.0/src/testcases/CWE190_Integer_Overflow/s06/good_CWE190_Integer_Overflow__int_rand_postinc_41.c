void FUN0(int data)
{
    {
        data++;
        int result = data;
        printIntLine(result);
    }
}
void FUN1()
{
    int data;
    data = 0;
    data = 2;
    FUN0(data);
}
void FUN2(int data)
{
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
void FUN3()
{
    int data;
    data = 0;
    data = RAND32();
    FUN2(data);
}
