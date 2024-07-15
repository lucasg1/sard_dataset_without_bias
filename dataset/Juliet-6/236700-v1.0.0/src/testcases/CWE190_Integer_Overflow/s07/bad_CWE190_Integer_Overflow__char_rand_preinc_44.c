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
void FUN1()
{
    char data;
    void (*funcPtr) (char) = FUN0;
    data = ' ';
    data = (char)RAND32();
    funcPtr(data);
}
