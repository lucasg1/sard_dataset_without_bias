void FUN0()
{
    long data;
    if(globalReturnsTrue())
    {
        data = 5L;
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printLongLine(data);
    }
}
void FUN1()
{
    long data;
    if(globalReturnsTrue())
    {
        data = 5L;
    }
    if(globalReturnsTrue())
    {
        printLongLine(data);
    }
}
void FUN2()
{
    long data;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5L;
        printLongLine(data);
    }
    if(globalReturnsTrue())
    {
        data = 10L;
        printLongLine(data);
    }
}
void FUN3()
{
    long data;
    if(globalReturnsTrue())
    {
        data = 5L;
        printLongLine(data);
    }
    if(globalReturnsTrue())
    {
        data = 10L;
        printLongLine(data);
    }
}
