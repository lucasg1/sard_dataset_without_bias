void FUN0()
{
    char data;
    data = 'C';
    if(globalFalse)
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
    if(globalTrue)
    {
        printHexCharLine(data);
    }
}
