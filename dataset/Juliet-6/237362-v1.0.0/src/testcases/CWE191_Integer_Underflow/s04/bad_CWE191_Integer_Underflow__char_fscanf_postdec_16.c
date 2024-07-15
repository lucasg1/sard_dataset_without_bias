void FUN0()
{
    char data;
    data = ' ';
    while(1)
    {
        fscanf (stdin, "%c", &data);
        break;
    }
    while(1)
    {
        {
<START>
            data--;
<END>
            char result = data;
            printHexCharLine(result);
        }
        break;
    }
}
