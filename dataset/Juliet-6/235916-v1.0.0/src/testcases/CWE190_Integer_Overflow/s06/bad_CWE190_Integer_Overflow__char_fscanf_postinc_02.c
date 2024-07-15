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
            data++;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
