void FUN0()
{
    int64_t data;
    switch(6)
    {
    case 6:
        data = 5LL;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
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
    switch(6)
    {
    case 6:
        data = 5LL;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        printLongLongLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    int64_t data;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = 5LL;
        printLongLongLine(data);
        break;
    }
    switch(7)
    {
    case 7:
        data = 10LL;
        printLongLongLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    int64_t data;
    switch(6)
    {
    case 6:
        data = 5LL;
        printLongLongLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        data = 10LL;
        printLongLongLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
