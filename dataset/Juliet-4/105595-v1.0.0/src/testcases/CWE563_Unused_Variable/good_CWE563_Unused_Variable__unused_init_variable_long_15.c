void FUN0()
{
    long data;
    data = 5L;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        printLongLine(data);
        break;
    }
}
void FUN1()
{
    long data;
    data = 5L;
    switch(6)
    {
    case 6:
        printLongLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
