void FUN0()
{
    double data;
    if(globalReturnsTrueOrFalse())
    {
        ; 
    }
    else
    {
        data = 5.0;
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printDoubleLine(data);
<END>
    }
    else
    {
        data = 5.0;
        printDoubleLine(data);
    }
}
