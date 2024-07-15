void FUN0()
{
    char data;
    ; 
    if(globalFalse)
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
    if(globalTrue)
    {
        data = 'C';
        printHexCharLine(data);
    }
}
