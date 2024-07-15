void FUN0()
{
    goto sink;
sink:
    {
        char charStack = 'a';
        char *charPointer = &charStack;
        printHexCharLine(*charPointer);
    }
}
