static int VAR0 = 0;
static short FUN0(short data)
{
    if(VAR0)
    {
        data = CHAR_MAX + 1;
    }
    return data;
}
void FUN1()
{
    short data;
    data = -1;
    VAR0 = 1; 
    data = FUN0(data);
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
