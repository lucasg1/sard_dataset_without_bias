void FUN0()
{
    int64_t data;
    data = 5LL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printLongLongLine(data);
    }
}
void FUN1()
{
    int64_t data;
    data = 5LL;
    if(globalReturnsTrue())
    {
        printLongLongLine(data);
    }
}
