void FUN0()
{
    char data;
    data = ' ';
    fscanf (stdin, "%c", &data);
    {
<START>
        char result = data * data;
<END>
        printHexCharLine(result);
    }
}
