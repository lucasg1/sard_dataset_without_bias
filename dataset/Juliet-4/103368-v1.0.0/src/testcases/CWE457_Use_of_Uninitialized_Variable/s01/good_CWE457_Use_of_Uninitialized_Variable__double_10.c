void FUN0()
{
    double data;
    if(globalTrue)
    {
        ; 
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        ; 
    }
    if(globalTrue)
    {
        data = 5.0;
        printDoubleLine(data);
    }
}
void FUN2()
{
    double data;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5.0;
    }
    if(globalTrue)
    {
        printDoubleLine(data);
    }
}
void FUN3()
{
    double data;
    if(globalTrue)
    {
        data = 5.0;
    }
    if(globalTrue)
    {
        printDoubleLine(data);
    }
}
