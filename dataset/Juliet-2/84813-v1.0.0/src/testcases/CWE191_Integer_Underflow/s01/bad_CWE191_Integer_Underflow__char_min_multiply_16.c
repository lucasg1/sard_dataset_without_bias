void FUN0()
{
    char data;
    data = ' ';
    while(1)
    {
        data = CHAR_MIN;
        break;
    }
    while(1)
    {
        if(data < 0) 
        {
<START>
            char result = data * 2;
<END>
            printHexCharLine(result);
        }
        break;
    }
}
