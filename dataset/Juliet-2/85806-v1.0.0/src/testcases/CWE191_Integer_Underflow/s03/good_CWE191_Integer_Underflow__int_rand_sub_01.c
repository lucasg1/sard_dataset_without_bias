void FUN0()
{
    int data;
    data = 0;
    data = -2;
    {
        int result = data - 1;
        printIntLine(result);
    }
}
void FUN1()
{
    int data;
    data = 0;
    data = RAND32();
    if (data > INT_MIN)
    {
        int result = data - 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
