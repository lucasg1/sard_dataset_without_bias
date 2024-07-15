static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    short data;
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        data = (short)RAND32();
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data > SHRT_MIN)
        {
            data--;
            short result = data;
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
    if(STATIC_CONST_TRUE)
    {
        data = (short)RAND32();
    }
    if(STATIC_CONST_TRUE)
    {
        if (data > SHRT_MIN)
        {
            data--;
            short result = data;
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
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(STATIC_CONST_TRUE)
    {
        {
            data--;
            short result = data;
            printIntLine(result);
        }
    }
}
void FUN3()
{
    short data;
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        data = -2;
    }
    if(STATIC_CONST_TRUE)
    {
        {
            data--;
            short result = data;
            printIntLine(result);
        }
    }
}
