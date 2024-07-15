void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        data = RAND32();
    }
    else
    {
        data = 7;
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printIntLine(100 / data);
<END>
    }
    else
    {
        if( data != 0 )
        {
            printIntLine(100 / data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
