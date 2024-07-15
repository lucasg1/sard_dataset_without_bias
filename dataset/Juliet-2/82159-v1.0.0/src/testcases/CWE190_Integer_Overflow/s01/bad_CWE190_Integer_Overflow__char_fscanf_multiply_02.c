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
        if(data > 0) 
        {
<START>
            char result = data * 2;
<END>
            printHexCharLine(result);
        }
    }
}
