static int VAR0 = 0;
static short FUN0(short data)
{
    if(VAR0)
    {
        data = -1;
    }
    return data;
}
void FUN1()
{
    short data;
    data = 0;
    VAR0 = 1; 
    data = FUN0(data);
    {
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
<START>
            memmove(dest, source, data);
<END>
            dest[data] = '\0'; 
        }
        printLine(dest);
    }
}
