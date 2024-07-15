void FUN0()
{
    int i,j;
    char data;
    for(i = 0; i < 1; i++)
    {
        data = 'C';
    }
    for(j = 0; j < 1; j++)
    {
<START>
        data = 'Z';
<END>
        printHexCharLine(data);
    }
}
