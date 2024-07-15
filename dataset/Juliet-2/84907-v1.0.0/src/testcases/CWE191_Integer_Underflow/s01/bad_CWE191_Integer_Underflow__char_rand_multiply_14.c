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
        if(data < 0) 
        {
<START>
            char result = data * 2;
<END>
            printHexCharLine(result);
        }
    }
}
