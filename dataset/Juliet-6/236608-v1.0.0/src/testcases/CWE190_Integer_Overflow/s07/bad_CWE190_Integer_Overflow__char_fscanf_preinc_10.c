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
            ++data;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
