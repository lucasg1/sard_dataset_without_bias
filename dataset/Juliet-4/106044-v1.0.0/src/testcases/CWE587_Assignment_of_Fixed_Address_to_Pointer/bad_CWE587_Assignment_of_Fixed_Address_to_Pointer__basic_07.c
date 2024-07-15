static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
        {
<START>
            char *charPointer = (char*)0x400000;
<END>
            printHexCharLine(*charPointer);
        }
    }
}
