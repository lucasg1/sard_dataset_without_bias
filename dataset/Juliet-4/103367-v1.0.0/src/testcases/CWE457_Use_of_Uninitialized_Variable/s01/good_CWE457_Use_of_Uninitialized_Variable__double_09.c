void FUN0()
{
    double data;
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
    if(GLOBAL_CONST_TRUE)
    {
        data = 5.0;
        printDoubleLine(data);
    }
}
void FUN2()
{
    double data;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5.0;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printDoubleLine(data);
    }
}
void FUN3()
{
    double data;
    if(GLOBAL_CONST_TRUE)
    {
        data = 5.0;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printDoubleLine(data);
    }
}
