void FUN0()
{
    long data;
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
        data = 5L;
        printLongLine(data);
    }
}
void FUN1()
{
    long data;
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
    if(GLOBAL_CONST_TRUE)
    {
        data = 5L;
        printLongLine(data);
    }
}
void FUN2()
{
    long data;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5L;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printLongLine(data);
    }
}
void FUN3()
{
    long data;
    if(GLOBAL_CONST_TRUE)
    {
        data = 5L;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printLongLine(data);
    }
}
