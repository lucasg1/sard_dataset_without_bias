void FUN0()
{
    double data;
    if(globalReturnsTrue())
    {
        ; 
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5.0;
        printDoubleLine(data);
    }
}
void FUN1()
{
    double data;
    if(globalReturnsTrue())
    {
        ; 
    }
    if(globalReturnsTrue())
    {
        data = 5.0;
        printDoubleLine(data);
    }
}
void FUN2()
{
    double data;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5.0;
    }
    if(globalReturnsTrue())
    {
        printDoubleLine(data);
    }
}
void FUN3()
{
    double data;
    if(globalReturnsTrue())
    {
        data = 5.0;
    }
    if(globalReturnsTrue())
    {
        printDoubleLine(data);
    }
}
