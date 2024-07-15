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
            char result = data + 1;
<END>
            printHexCharLine(result);
        }
        break;
    }
}
