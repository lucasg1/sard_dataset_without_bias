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
        {
<START>
            data++;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
