void FUN0()
{
    char data;
    data = ' ';
    if(GLOBAL_CONST_TRUE)
    {
        fscanf (stdin, "%c", &data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
<START>
            data--;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
