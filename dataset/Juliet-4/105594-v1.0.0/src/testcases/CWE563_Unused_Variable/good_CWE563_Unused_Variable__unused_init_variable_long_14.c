void FUN0()
{
    long data;
    data = 5L;
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        printLongLine(data);
    }
}
