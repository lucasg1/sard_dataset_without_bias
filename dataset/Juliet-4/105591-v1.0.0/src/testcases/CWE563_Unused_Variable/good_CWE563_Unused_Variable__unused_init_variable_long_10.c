void FUN0()
{
    long data;
    data = 5L;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printLongLine(data);
    }
}
void FUN1()
{
    long data;
    data = 5L;
    if(globalTrue)
    {
        printLongLine(data);
    }
}
