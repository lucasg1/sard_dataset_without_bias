void FUN0()
{
    int64_t data;
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
        data = 5LL;
        printLongLongLine(data);
    }
}
void FUN1()
{
    int64_t data;
    if(globalTrue)
    {
        ; 
    }
    if(globalTrue)
    {
        data = 5LL;
        printLongLongLine(data);
    }
}
void FUN2()
{
    int64_t data;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5LL;
    }
    if(globalTrue)
    {
        printLongLongLine(data);
    }
}
void FUN3()
{
    int64_t data;
    if(globalTrue)
    {
        data = 5LL;
    }
    if(globalTrue)
    {
        printLongLongLine(data);
    }
}
