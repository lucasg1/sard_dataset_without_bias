void FUN0()
{
    char data;
    data = ' ';
    data = CHAR_MIN;
    {
<START>
        --data;
<END>
        char result = data;
        printHexCharLine(result);
    }
}
