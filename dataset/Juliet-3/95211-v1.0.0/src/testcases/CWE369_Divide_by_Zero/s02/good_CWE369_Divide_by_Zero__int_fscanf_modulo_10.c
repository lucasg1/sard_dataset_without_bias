void FUN0()
{
    int data;
    data = -1;
    if(globalTrue)
    {
        fscanf(stdin, "%d", &data);
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        fscanf(stdin, "%d", &data);
    }
    if(globalTrue)
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
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 7;
    }
    if(globalTrue)
    {
        printIntLine(100 % data);
    }
}
void FUN3()
{
    int data;
    data = -1;
    if(globalTrue)
    {
        data = 7;
    }
    if(globalTrue)
    {
        printIntLine(100 % data);
    }
}
