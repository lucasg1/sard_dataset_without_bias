void FUN0()
{
    long data;
    ; 
    if(globalReturnsFalse())
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
    ; 
    if(globalReturnsTrue())
    {
        data = 5L;
        printLongLine(data);
    }
}
