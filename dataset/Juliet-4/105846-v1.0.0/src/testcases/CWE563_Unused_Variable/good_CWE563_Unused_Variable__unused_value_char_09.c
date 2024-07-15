void FUN0()
{
    char data;
    if(GLOBAL_CONST_TRUE)
    {
        data = 'C';
    }
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        data = 'C';
    }
    if(GLOBAL_CONST_TRUE)
    {
        printHexCharLine(data);
    }
}
void FUN2()
{
    char data;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 'C';
        printHexCharLine(data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        data = 'Z';
        printHexCharLine(data);
    }
}
void FUN3()
{
    char data;
    if(GLOBAL_CONST_TRUE)
    {
        data = 'C';
        printHexCharLine(data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        data = 'Z';
        printHexCharLine(data);
    }
}
