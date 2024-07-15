void FUN0()
{
    char data;
    switch(6)
    {
    case 6:
        data = 'C';
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        data = 'Z';
<END>
        printHexCharLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
