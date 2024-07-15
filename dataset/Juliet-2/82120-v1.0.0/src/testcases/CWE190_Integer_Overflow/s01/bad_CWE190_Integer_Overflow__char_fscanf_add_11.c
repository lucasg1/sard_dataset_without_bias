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
            char result = data + 1;
<END>
            printHexCharLine(result);
        }
    }
}
