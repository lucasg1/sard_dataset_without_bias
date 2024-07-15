void FUN0()
{
    char data;
    data = ' ';
    if(globalTrue)
    {
        fscanf (stdin, "%c", &data);
    }
    if(globalTrue)
    {
        {
<START>
            char result = data * data;
<END>
            printHexCharLine(result);
        }
    }
}
