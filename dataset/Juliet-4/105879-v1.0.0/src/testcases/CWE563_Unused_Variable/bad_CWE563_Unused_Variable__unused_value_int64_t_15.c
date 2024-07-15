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
    switch(7)
    {
    case 7:
<START>
        data = 10LL;
<END>
        printLongLongLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
