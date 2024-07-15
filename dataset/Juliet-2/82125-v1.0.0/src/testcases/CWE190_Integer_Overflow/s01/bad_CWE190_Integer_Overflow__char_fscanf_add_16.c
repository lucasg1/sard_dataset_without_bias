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
            char result = data + 1;
<END>
            printHexCharLine(result);
        }
        break;
    }
}
