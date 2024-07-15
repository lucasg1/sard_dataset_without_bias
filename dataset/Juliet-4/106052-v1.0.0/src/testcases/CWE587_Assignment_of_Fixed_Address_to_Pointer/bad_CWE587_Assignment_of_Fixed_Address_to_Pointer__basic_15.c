void FUN0()
{
    switch(6)
    {
    case 6:
    {
<START>
        char *charPointer = (char*)0x400000;
<END>
        printHexCharLine(*charPointer);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
