void FUN0()
{
    double data;
    if(5==5)
    {
        ; 
    }
    if(5!=5)
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
    if(5==5)
    {
        ; 
    }
    if(5==5)
    {
        data = 5.0;
        printDoubleLine(data);
    }
}
void FUN2()
{
    double data;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5.0;
    }
    if(5==5)
    {
        printDoubleLine(data);
    }
}
void FUN3()
{
    double data;
    if(5==5)
    {
        data = 5.0;
    }
    if(5==5)
    {
        printDoubleLine(data);
    }
}
