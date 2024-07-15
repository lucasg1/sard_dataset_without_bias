void FUN0()
{
    char data;
    data = ' ';
    if(globalReturnsTrue())
    {
        fscanf (stdin, "%c", &data);
    }
    if(globalReturnsTrue())
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
