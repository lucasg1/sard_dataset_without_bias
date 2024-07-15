static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
<START>
            char *charPointer = (char*)0x400000;
<END>
            printHexCharLine(*charPointer);
        }
    }
}
