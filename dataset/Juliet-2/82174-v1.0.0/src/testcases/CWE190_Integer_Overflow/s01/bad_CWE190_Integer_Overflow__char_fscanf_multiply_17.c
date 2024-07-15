void FUN0()
{
    int i,j;
    char data;
    data = ' ';
    for(i = 0; i < 1; i++)
    {
        fscanf (stdin, "%c", &data);
    }
    for(j = 0; j < 1; j++)
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
