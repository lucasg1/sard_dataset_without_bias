void FUN0()
{
    char data;
    data = ' ';
    if(globalFive==5)
    {
        data = (char)RAND32();
    }
    if(globalFive==5)
    {
        {
<START>
            char result = data - 1;
<END>
            printHexCharLine(result);
        }
    }
}
