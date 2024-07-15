void FUN0()
{
    char data;
    data = ' ';
    if(1)
    {
        fscanf (stdin, "%c", &data);
    }
    if(1)
    {
        {
<START>
            char result = data - 1;
<END>
            printHexCharLine(result);
        }
    }
}
