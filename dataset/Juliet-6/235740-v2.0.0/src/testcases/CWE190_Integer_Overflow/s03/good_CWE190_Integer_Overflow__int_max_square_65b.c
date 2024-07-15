void FUN0(int data);
void FUN1()
{
    int data;
    void (*funcPtr) (int) = FUN0;
    data = 0;
    data = 2;
    funcPtr(data);
}
void FUN2(int data);
void FUN3()
{
    int data;
    void (*funcPtr) (int) = FUN2;
    data = 0;
    data = INT_MAX;
    funcPtr(data);
}
void FUN0(int data)
{
    {
        int result = data * data;
        printIntLine(result);
    }
}
void FUN2(int data)
{
    if (data > INT_MIN && abs(data) < (long)sqrt((double)INT_MAX))
    {
        int result = data * data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
