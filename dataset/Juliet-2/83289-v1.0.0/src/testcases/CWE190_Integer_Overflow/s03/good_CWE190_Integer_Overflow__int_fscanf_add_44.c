void FUN0(int data)
{
    {
        int result = data + 1;
        printIntLine(result);
    }
}
void FUN1()
{
    int data;
    void (*funcPtr) (int) = FUN0;
    data = 0;
    data = 2;
    funcPtr(data);
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
void FUN3()
{
    int data;
    void (*funcPtr) (int) = FUN2;
    data = 0;
    fscanf(stdin, "%d", &data);
    funcPtr(data);
}
