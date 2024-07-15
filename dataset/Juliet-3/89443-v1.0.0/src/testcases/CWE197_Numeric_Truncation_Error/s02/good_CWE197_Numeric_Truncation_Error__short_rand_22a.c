extern int VAR0;
extern int VAR1;
short FUN0(short data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = CHAR_MAX-5;
    }
    return data;
}
short FUN1(short data)
{
    if(VAR1)
    {
        data = CHAR_MAX-5;
    }
    return data;
}
int VAR0 = 0;
int VAR1 = 0;
short FUN0(short data);
void FUN3()
{
    short data;
    data = -1;
    VAR0 = 0; 
    data = FUN0(data);
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
short FUN1(short data);
void FUN5()
{
    short data;
    data = -1;
    VAR1 = 1; 
    data = FUN1(data);
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
