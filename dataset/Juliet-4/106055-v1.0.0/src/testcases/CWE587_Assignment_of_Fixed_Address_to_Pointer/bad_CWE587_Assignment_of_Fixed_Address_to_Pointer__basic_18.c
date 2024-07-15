void FUN0()
{
    goto sink;
sink:
    {
<START>
        char *charPointer = (char*)0x400000;
<END>
        printHexCharLine(*charPointer);
    }
}
