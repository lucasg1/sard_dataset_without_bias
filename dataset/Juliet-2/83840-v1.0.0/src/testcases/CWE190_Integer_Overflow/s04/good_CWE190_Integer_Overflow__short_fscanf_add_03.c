void FUN0()
{
    short data;
    data = 0;
    if(5==5)
    {
        fscanf (stdin, "%hd", &data);
    }
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data < SHRT_MAX)
        {
            short result = data + 1;
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
    short data;
    data = 0;
    if(5==5)
    {
        fscanf (stdin, "%hd", &data);
    }
    if(5==5)
    {
        if (data < SHRT_MAX)
        {
            short result = data + 1;
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
    short data;
    data = 0;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(5==5)
    {
        {
            short result = data + 1;
            printIntLine(result);
        }
    }
}
void FUN3()
{
    short data;
    data = 0;
    if(5==5)
    {
        data = 2;
    }
    if(5==5)
    {
        {
            short result = data + 1;
            printIntLine(result);
        }
    }
}
