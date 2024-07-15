void FUN0()
{
    int data;
    data = -1;
    if(GLOBAL_CONST_TRUE)
    {
        data = 0;
    }
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if( data != 0 )
        {
            printIntLine(100 % data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
void FUN1()
{
    int data;
    data = -1;
    if(GLOBAL_CONST_TRUE)
    {
        data = 0;
    }
    if(GLOBAL_CONST_TRUE)
    {
        if( data != 0 )
        {
            printIntLine(100 % data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
void FUN2()
{
    int data;
    data = -1;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 7;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printIntLine(100 % data);
    }
}
void FUN3()
{
    int data;
    data = -1;
    if(GLOBAL_CONST_TRUE)
    {
        data = 7;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printIntLine(100 % data);
    }
}
