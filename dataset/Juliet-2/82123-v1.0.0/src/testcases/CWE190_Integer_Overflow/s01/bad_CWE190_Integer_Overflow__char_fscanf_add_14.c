void FUN0()
{
    char data;
    data = ' ';
    if(globalFive==5)
    {
        fscanf (stdin, "%c", &data);
    }
    if(globalFive==5)
    {
        {
<START>
            char result = data + 1;
<END>
            printHexCharLine(result);
        }
    }
}
