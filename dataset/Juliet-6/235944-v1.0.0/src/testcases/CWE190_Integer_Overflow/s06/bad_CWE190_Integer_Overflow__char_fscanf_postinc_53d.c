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
void FUN4(char data);
void FUN0(char data)
{
    FUN4(data);
}
void FUN4(char data)
{
    {
<START>
        data++;
<END>
        char result = data;
        printHexCharLine(result);
    }
}
