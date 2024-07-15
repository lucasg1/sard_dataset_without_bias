void FUN0()
{
    int data;
    data = 0;
    if(1)
    {
        fscanf(stdin, "%d", &data);
    }
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data > INT_MIN)
        {
            data--;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN1()
{
    int data;
    data = 0;
    if(1)
    {
        fscanf(stdin, "%d", &data);
    }
    if(1)
    {
        if (data > INT_MIN)
        {
            data--;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN2()
{
    int data;
    data = 0;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(1)
    {
        {
            data--;
            int result = data;
            printIntLine(result);
        }
    }
}
void FUN3()
{
    int data;
    data = 0;
    if(1)
    {
        data = -2;
    }
    if(1)
    {
        {
            data--;
            int result = data;
            printIntLine(result);
        }
    }
}
