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
    void (*funcPtr) (int) = FUN0;
    data = 0;
    data = -2;
    funcPtr(data);
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
    void (*funcPtr) (int) = FUN2;
    data = 0;
    data = RAND32();
    funcPtr(data);
}
