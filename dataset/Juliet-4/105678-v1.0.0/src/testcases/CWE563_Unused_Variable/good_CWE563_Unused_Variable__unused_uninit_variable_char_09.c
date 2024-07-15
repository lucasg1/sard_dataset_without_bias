void FUN0()
{
    char data;
    ; 
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        data = 'C';
        printHexCharLine(data);
    }
}
