void FUN0()
{
    unsigned int data;
    data = 0;
    switch(6)
    {
    case 6:
        data = (unsigned int)RAND32();
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
        unsigned int result = data * data;
<END>
        printUnsignedLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
