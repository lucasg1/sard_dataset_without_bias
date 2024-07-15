extern int VAR0;
short FUN0(short data)
{
    if(VAR0)
    {
        fscanf (stdin, "%hd", &data);
    }
    return data;
}
int VAR0 = 0;
short FUN0(short data);
void FUN2()
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
