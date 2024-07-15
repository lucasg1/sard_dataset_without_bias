void FUN0()
{
    long data;
    data = 5L;
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        printLongLine(data);
    }
}
