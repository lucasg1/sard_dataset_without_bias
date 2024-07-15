void FUN0()
{
    long data;
    switch(6)
    {
    case 6:
        data = 5L;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        data = 10L;
<END>
        printLongLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
