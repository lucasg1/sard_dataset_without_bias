void FUN0(int data);
void FUN1()
{
    int data;
    data = 0;
    data = 2;
    FUN0(data);
}
void FUN2(int data);
void FUN3()
{
    int data;
    data = 0;
    data = INT_MAX;
    FUN2(data);
}
void FUN0(int data)
{
    {
        int result = data + 1;
        printIntLine(result);
    }
}
void FUN2(int data)
{
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
