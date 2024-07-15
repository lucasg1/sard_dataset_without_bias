void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
<START>
            char *charPointer = (char*)0x400000;
<END>
            printHexCharLine(*charPointer);
        }
    }
    else
    {
        {
            char charStack = 'a';
            char *charPointer = &charStack;
            printHexCharLine(*charPointer);
        }
    }
}
