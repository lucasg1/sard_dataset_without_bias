void FUN0(int data)
{
    {
        int result = data - 1;
        printIntLine(result);
    }
}
void FUN1()
{
    int data;
    data = 0;
    data = -2;
    FUN0(data);
}
void FUN2(int data)
{
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
void FUN3()
{
    int data;
    data = 0;
    data = INT_MIN;
    FUN2(data);
}
