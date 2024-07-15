void FUN0()
{
    char data;
    data = ' ';
    fscanf (stdin, "%c", &data);
    {
<START>
        ++data;
<END>
        char result = data;
        printHexCharLine(result);
    }
}
