void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
<START>
            char *charPointer = (char*)0x400000;
<END>
            printHexCharLine(*charPointer);
        }
    }
}
