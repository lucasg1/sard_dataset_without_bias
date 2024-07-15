void FUN0()
{
    double data;
    if(1)
    {
        ; 
    }
    if(0)
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
    if(1)
    {
        ; 
    }
    if(1)
    {
        data = 5.0;
        printDoubleLine(data);
    }
}
void FUN2()
{
    double data;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5.0;
    }
    if(1)
    {
        printDoubleLine(data);
    }
}
void FUN3()
{
    double data;
    if(1)
    {
        data = 5.0;
    }
    if(1)
    {
        printDoubleLine(data);
    }
}
