void FUN0()
{
    char data;
    ; 
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 'C';
        printHexCharLine(data);
    }
}
void FUN1()
{
    char data;
    ; 
    if(globalReturnsTrue())
    {
        data = 'C';
        printHexCharLine(data);
    }
}
