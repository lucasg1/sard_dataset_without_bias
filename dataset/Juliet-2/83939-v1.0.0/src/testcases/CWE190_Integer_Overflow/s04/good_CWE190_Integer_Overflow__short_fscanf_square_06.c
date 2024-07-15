static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    short data;
    data = 0;
    if(STATIC_CONST_FIVE==5)
    {
        fscanf (stdin, "%hd", &data);
    }
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (abs((long)data) <= (long)sqrt((double)SHRT_MAX))
        {
            short result = data * data;
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
    if(STATIC_CONST_FIVE==5)
    {
        fscanf (stdin, "%hd", &data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        if (abs((long)data) <= (long)sqrt((double)SHRT_MAX))
        {
            short result = data * data;
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
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            short result = data * data;
            printIntLine(result);
        }
    }
}
void FUN3()
{
    short data;
    data = 0;
    if(STATIC_CONST_FIVE==5)
    {
        data = 2;
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            short result = data * data;
            printIntLine(result);
        }
    }
}
