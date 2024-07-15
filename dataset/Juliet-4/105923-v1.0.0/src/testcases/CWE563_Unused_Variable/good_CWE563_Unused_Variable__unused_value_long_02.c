void FUN0()
{
    long data;
    if(1)
    {
        data = 5L;
    }
    if(0)
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
    if(1)
    {
        data = 5L;
    }
    if(1)
    {
        printLongLine(data);
    }
}
void FUN2()
{
    long data;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5L;
        printLongLine(data);
    }
    if(1)
    {
        data = 10L;
        printLongLine(data);
    }
}
void FUN3()
{
    long data;
    if(1)
    {
        data = 5L;
        printLongLine(data);
    }
    if(1)
    {
        data = 10L;
        printLongLine(data);
    }
}
