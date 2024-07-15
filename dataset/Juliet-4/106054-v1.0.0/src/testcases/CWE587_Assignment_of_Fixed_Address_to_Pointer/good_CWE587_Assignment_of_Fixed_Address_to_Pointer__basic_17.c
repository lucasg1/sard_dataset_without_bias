void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        {
            char charStack = 'a';
            char *charPointer = &charStack;
            printHexCharLine(*charPointer);
        }
    }
}
