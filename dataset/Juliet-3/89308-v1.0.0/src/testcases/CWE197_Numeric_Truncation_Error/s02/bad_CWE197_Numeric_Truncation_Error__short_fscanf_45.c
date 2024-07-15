static short VAR0;
static short VAR1;
void FUN0()
{
    short data = VAR0;
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
void FUN1()
{
    short data;
    data = -1;
<START>
    fscanf (stdin, "%hd", &data);
<END>
    VAR0 = data;
    FUN0();
}
