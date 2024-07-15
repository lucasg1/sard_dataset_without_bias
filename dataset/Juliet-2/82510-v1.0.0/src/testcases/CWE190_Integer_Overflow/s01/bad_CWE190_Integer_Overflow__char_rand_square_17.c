void FUN0()
{
    int i,j;
    char data;
    data = ' ';
    for(i = 0; i < 1; i++)
    {
        data = (char)RAND32();
    }
    for(j = 0; j < 1; j++)
    {
        {
<START>
            char result = data * data;
<END>
            printHexCharLine(result);
        }
    }
}
