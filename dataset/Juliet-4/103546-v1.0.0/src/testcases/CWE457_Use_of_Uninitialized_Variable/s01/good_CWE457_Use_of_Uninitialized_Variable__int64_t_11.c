void FUN0()
{
    int64_t data;
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
        data = 5LL;
        printLongLongLine(data);
    }
}
void FUN1()
{
    int64_t data;
    if(globalReturnsTrue())
    {
        ; 
    }
    if(globalReturnsTrue())
    {
        data = 5LL;
        printLongLongLine(data);
    }
}
void FUN2()
{
    int64_t data;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5LL;
    }
    if(globalReturnsTrue())
    {
        printLongLongLine(data);
    }
}
void FUN3()
{
    int64_t data;
    if(globalReturnsTrue())
    {
        data = 5LL;
    }
    if(globalReturnsTrue())
    {
        printLongLongLine(data);
    }
}
