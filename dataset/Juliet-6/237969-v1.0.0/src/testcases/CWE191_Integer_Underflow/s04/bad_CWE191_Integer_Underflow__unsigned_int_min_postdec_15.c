void FUN0()
{
    unsigned int data;
    data = 0;
    switch(6)
    {
    case 6:
        data = 0;
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
        data--;
<END>
        unsigned int result = data;
        printUnsignedLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
