void FUN0(char data);
void FUN1()
{
    char data;
    void (*funcPtr) (char) = FUN0;
    data = ' ';
    data = CHAR_MAX;
    funcPtr(data);
}
void FUN0(char data)
{
    {
<START>
        char result = data * data;
<END>
        printHexCharLine(result);
    }
}
