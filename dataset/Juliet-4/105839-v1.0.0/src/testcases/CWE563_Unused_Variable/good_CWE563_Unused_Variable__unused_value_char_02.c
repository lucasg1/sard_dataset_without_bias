void FUN0()
{
    char data;
    if(1)
    {
        data = 'C';
    }
    if(0)
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
    if(1)
    {
        data = 'C';
    }
    if(1)
    {
        printHexCharLine(data);
    }
}
void FUN2()
{
    char data;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 'C';
        printHexCharLine(data);
    }
    if(1)
    {
        data = 'Z';
        printHexCharLine(data);
    }
}
void FUN3()
{
    char data;
    if(1)
    {
        data = 'C';
        printHexCharLine(data);
    }
    if(1)
    {
        data = 'Z';
        printHexCharLine(data);
    }
}
