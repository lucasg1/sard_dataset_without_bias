void FUN0()
{
    long data;
    data = 5L;
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
    data = 5L;
    if(globalReturnsTrue())
    {
        printLongLine(data);
    }
}
