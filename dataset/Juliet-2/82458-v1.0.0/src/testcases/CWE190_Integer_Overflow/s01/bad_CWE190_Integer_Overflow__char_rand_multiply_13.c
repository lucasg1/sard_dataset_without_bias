void FUN0()
{
    char data;
    data = ' ';
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (char)RAND32();
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        if(data > 0) 
        {
<START>
            char result = data * 2;
<END>
            printHexCharLine(result);
        }
    }
}
