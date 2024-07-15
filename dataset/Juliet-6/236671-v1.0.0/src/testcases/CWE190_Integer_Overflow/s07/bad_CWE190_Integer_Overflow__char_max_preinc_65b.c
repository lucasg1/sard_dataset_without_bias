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
        ++data;
<END>
        char result = data;
        printHexCharLine(result);
    }
}
