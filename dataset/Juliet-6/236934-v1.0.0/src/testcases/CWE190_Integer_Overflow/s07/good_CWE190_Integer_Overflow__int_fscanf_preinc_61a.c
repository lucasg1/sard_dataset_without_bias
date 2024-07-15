int FUN0(int data)
{
    data = 2;
    return data;
}
int FUN1(int data)
{
    fscanf(stdin, "%d", &data);
    return data;
}
int FUN0(int data);
void FUN3()
{
    int data;
    data = 0;
    data = FUN0(data);
    {
        ++data;
        int result = data;
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
        ++data;
        int result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
