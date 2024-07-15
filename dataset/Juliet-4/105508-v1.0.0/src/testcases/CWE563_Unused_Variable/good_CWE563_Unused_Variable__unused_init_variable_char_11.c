void FUN0()
{
    char data;
    data = 'C';
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printHexCharLine(data);
    }
}
void FUN1()
{
    char data;
    data = 'C';
    if(globalReturnsTrue())
    {
        printHexCharLine(data);
    }
}
