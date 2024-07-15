void FUN0()
{
    unsigned int data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        data = (unsigned int)RAND32();
    }
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data > 0)
        {
            data--;
            unsigned int result = data;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        data = (unsigned int)RAND32();
    }
    if(GLOBAL_CONST_TRUE)
    {
        if (data > 0)
        {
            data--;
            unsigned int result = data;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN2()
{
    unsigned int data;
    data = 0;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
            data--;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
void FUN3()
{
    unsigned int data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        data = -2;
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
            data--;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
