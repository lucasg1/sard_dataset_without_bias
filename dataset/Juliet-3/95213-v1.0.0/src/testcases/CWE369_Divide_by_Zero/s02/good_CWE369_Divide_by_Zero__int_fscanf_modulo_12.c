void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        fscanf(stdin, "%d", &data);
    }
    else
    {
        fscanf(stdin, "%d", &data);
    }
    if(globalReturnsTrueOrFalse())
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
    if(globalReturnsTrueOrFalse())
    {
        data = 7;
    }
    else
    {
        data = 7;
    }
    if(globalReturnsTrueOrFalse())
    {
        printIntLine(100 % data);
    }
    else
    {
        printIntLine(100 % data);
    }
}
