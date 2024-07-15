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
            --data;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
