void FUN0()
{
    int data;
    data = 0;
    data = 2;
    {
        int result = data + 1;
        printIntLine(result);
    }
}
void FUN1()
{
    int data;
    data = 0;
    data = INT_MAX;
    if (data < INT_MAX)
    {
        int result = data + 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
