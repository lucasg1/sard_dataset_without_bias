void FUN0()
{
    int i,j;
    char data;
    data = ' ';
    for(i = 0; i < 1; i++)
    {
        data = CHAR_MAX;
    }
    for(j = 0; j < 1; j++)
    {
        {
<START>
            data++;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
