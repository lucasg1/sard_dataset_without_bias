void FUN0()
{
    char data;
    data = 'C';
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
    data = 'C';
    if(GLOBAL_CONST_TRUE)
    {
        printHexCharLine(data);
    }
}
