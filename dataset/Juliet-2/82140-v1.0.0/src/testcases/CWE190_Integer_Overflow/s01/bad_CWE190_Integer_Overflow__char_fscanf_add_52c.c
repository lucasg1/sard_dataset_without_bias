void FUN0(char data);
void FUN1(char data)
{
    FUN0(data);
}
void FUN1(char data);
void FUN3()
{
    char data;
    data = ' ';
    fscanf (stdin, "%c", &data);
    FUN1(data);
}
void FUN0(char data)
{
    {
<START>
        char result = data + 1;
<END>
        printHexCharLine(result);
    }
}
