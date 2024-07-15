void FUN0()
{
    char data;
    if(globalReturnsTrue())
    {
        data = 'C';
    }
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
    if(globalReturnsTrue())
    {
        data = 'C';
    }
    if(globalReturnsTrue())
    {
        printHexCharLine(data);
    }
}
void FUN2()
{
    char data;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 'C';
        printHexCharLine(data);
    }
    if(globalReturnsTrue())
    {
        data = 'Z';
        printHexCharLine(data);
    }
}
void FUN3()
{
    char data;
    if(globalReturnsTrue())
    {
        data = 'C';
        printHexCharLine(data);
    }
    if(globalReturnsTrue())
    {
        data = 'Z';
        printHexCharLine(data);
    }
}
