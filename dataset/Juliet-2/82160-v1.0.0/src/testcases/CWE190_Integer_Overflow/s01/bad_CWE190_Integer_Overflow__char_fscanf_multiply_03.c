void FUN0()
{
    char data;
    data = ' ';
    if(5==5)
    {
        fscanf (stdin, "%c", &data);
    }
    if(5==5)
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
