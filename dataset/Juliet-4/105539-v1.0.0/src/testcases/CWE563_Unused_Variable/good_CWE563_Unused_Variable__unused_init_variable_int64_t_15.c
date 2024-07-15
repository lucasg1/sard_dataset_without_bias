void FUN0()
{
    int64_t data;
    data = 5LL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        printLongLongLine(data);
        break;
    }
}
void FUN1()
{
    int64_t data;
    data = 5LL;
    switch(6)
    {
    case 6:
        printLongLongLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
