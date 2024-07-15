int FUN0(int data)
{
    data = 2;
    return data;
}
int FUN1(int data)
{
    data = RAND32();
    return data;
}
int FUN0(int data);
void FUN3()
{
    int data;
    data = 0;
    data = FUN0(data);
    {
        int result = data + 1;
        printIntLine(result);
    }
}
int FUN1(int data);
void FUN5()
{
    int data;
    data = 0;
    data = FUN1(data);
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
