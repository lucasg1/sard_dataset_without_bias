void FUN0()
{
    unsigned int data;
    data = 0;
    switch(6)
    {
    case 6:
        fscanf (stdin, "%u", &data);
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
        unsigned int result = data - 1;
<END>
        printUnsignedLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
