void FUN0()
{
    char data;
    data = ' ';
    while(1)
    {
        data = CHAR_MAX;
        break;
    }
    while(1)
    {
        {
<START>
            data++;
<END>
            char result = data;
            printHexCharLine(result);
        }
        break;
    }
}
