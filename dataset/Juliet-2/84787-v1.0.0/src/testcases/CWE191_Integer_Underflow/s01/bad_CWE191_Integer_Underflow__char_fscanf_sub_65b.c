void FUN0(char data);
void FUN1()
{
    char data;
    void (*funcPtr) (char) = FUN0;
    data = ' ';
    fscanf (stdin, "%c", &data);
    funcPtr(data);
}
void FUN0(char data)
{
    {
<START>
        char result = data - 1;
<END>
        printHexCharLine(result);
    }
}
