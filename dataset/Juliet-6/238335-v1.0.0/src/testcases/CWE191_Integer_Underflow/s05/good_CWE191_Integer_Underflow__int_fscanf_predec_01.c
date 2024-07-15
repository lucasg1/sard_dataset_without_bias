void FUN0()
{
    int data;
    data = 0;
    data = -2;
    {
        --data;
        int result = data;
        printIntLine(result);
    }
}
void FUN1()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    if (data > INT_MIN)
    {
        --data;
        int result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
