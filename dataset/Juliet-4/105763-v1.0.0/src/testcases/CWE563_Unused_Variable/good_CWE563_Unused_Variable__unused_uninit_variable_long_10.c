void FUN0()
{
    long data;
    ; 
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5L;
        printLongLine(data);
    }
}
void FUN1()
{
    long data;
    ; 
    if(globalTrue)
    {
        data = 5L;
        printLongLine(data);
    }
}
