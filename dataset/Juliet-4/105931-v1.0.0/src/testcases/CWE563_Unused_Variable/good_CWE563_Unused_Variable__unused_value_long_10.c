void FUN0()
{
    long data;
    if(globalTrue)
    {
        data = 5L;
    }
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
    if(globalTrue)
    {
        data = 5L;
    }
    if(globalTrue)
    {
        printLongLine(data);
    }
}
void FUN2()
{
    long data;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5L;
        printLongLine(data);
    }
    if(globalTrue)
    {
        data = 10L;
        printLongLine(data);
    }
}
void FUN3()
{
    long data;
    if(globalTrue)
    {
        data = 5L;
        printLongLine(data);
    }
    if(globalTrue)
    {
        data = 10L;
        printLongLine(data);
    }
}
