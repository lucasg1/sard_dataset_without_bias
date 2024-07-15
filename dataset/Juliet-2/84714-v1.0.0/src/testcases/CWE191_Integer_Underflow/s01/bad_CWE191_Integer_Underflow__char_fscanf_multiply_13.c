void FUN0()
{
    char data;
    data = ' ';
    if(GLOBAL_CONST_FIVE==5)
    {
        fscanf (stdin, "%c", &data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        if(data < 0) 
        {
<START>
            char result = data * 2;
<END>
            printHexCharLine(result);
        }
    }
}
