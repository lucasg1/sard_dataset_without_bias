void FUN0(char data)
{
    {
<START>
        char result = data * data;
<END>
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
