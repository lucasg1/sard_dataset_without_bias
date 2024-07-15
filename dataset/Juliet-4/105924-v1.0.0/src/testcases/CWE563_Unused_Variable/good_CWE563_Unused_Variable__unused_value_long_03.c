void FUN0()
{
    long data;
    if(5==5)
    {
        data = 5L;
    }
    if(5!=5)
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
    if(5==5)
    {
        data = 5L;
    }
    if(5==5)
    {
        printLongLine(data);
    }
}
void FUN2()
{
    long data;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5L;
        printLongLine(data);
    }
    if(5==5)
    {
        data = 10L;
        printLongLine(data);
    }
}
void FUN3()
{
    long data;
    if(5==5)
    {
        data = 5L;
        printLongLine(data);
    }
    if(5==5)
    {
        data = 10L;
        printLongLine(data);
    }
}
