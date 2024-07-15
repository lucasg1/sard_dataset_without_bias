void FUN0()
{
    char data;
    data = ' ';
    switch(6)
    {
    case 6:
        data = CHAR_MAX;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
<START>
        ++data;
<END>
        char result = data;
        printHexCharLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
