void FUN0()
{
    int data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        fscanf(stdin, "%d", &data);
    }
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data < INT_MAX)
        {
            data++;
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
    if(GLOBAL_CONST_TRUE)
    {
        fscanf(stdin, "%d", &data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        if (data < INT_MAX)
        {
            data++;
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
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
            data++;
            int result = data;
            printIntLine(result);
        }
    }
}
void FUN3()
{
    int data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        data = 2;
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
            data++;
            int result = data;
            printIntLine(result);
        }
    }
}
