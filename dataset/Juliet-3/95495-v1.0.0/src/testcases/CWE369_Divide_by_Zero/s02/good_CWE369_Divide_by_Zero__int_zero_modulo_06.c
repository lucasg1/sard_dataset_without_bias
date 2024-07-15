static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int data;
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        data = 0;
    }
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        data = 0;
    }
    if(STATIC_CONST_FIVE==5)
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
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 7;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printIntLine(100 % data);
    }
}
void FUN3()
{
    int data;
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        data = 7;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printIntLine(100 % data);
    }
}
