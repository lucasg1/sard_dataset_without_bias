static char FUN0(char data)
{
    fscanf (stdin, "%c", &data);
    return data;
}
void FUN1()
{
    char data;
    data = ' ';
    data = FUN0(data);
    {
<START>
        char result = data - 1;
<END>
        printHexCharLine(result);
    }
}
