void FUN0(char data)
{
    {
<START>
        data--;
<END>
        char result = data;
        printHexCharLine(result);
    }
}
void FUN1()
{
    char data;
    data = ' ';
    fscanf (stdin, "%c", &data);
    FUN0(data);
}
