void FUN0()
{
    char data;
    if(globalTrue)
    {
        data = 'C';
    }
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
    if(globalTrue)
    {
        data = 'C';
    }
    if(globalTrue)
    {
        printHexCharLine(data);
    }
}
void FUN2()
{
    char data;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 'C';
        printHexCharLine(data);
    }
    if(globalTrue)
    {
        data = 'Z';
        printHexCharLine(data);
    }
}
void FUN3()
{
    char data;
    if(globalTrue)
    {
        data = 'C';
        printHexCharLine(data);
    }
    if(globalTrue)
    {
        data = 'Z';
        printHexCharLine(data);
    }
}
