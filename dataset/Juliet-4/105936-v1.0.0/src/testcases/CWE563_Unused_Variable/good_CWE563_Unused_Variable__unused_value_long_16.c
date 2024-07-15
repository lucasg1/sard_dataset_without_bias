void FUN0()
{
    long data;
    while(1)
    {
        data = 5L;
        break;
    }
    while(1)
    {
        printLongLine(data);
        break;
    }
}
void FUN1()
{
    long data;
    while(1)
    {
        data = 5L;
        printLongLine(data);
        break;
    }
    while(1)
    {
        data = 10L;
        printLongLine(data);
        break;
    }
}
