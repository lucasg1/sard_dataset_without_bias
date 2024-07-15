void FUN0()
{
    int i,j;
    char data;
    data = ' ';
    for(i = 0; i < 1; i++)
    {
        data = CHAR_MIN;
    }
    for(j = 0; j < 1; j++)
    {
        {
<START>
            char result = data - 1;
<END>
            printHexCharLine(result);
        }
    }
}
