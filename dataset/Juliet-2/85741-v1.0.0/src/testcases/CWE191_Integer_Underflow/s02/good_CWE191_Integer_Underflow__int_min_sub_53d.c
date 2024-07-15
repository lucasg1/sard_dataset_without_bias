void FUN0(int data);
void FUN1()
{
    int data;
    data = 0;
    data = -2;
    FUN0(data);
}
void FUN2(int data);
void FUN3()
{
    int data;
    data = 0;
    data = INT_MIN;
    FUN2(data);
}
void FUN5(int data);
void FUN6(int data)
{
    FUN5(data);
}
void FUN7(int data);
void FUN8(int data)
{
    FUN7(data);
}
void FUN6(int data);
void FUN0(int data)
{
    FUN6(data);
}
void FUN8(int data);
void FUN2(int data)
{
    FUN8(data);
}
void FUN5(int data)
{
    {
        int result = data - 1;
        printIntLine(result);
    }
}
void FUN7(int data)
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
