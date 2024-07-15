void FUN0()
{
    int data;
    data = 0;
    data = 2;
    {
        ++data;
        int result = data;
        printIntLine(result);
    }
}
void FUN1()
{
    int data;
    data = 0;
    data = RAND32();
    if (data < INT_MAX)
    {
        ++data;
        int result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
