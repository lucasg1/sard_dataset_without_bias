static int VAR0 = 0;
static int VAR1 = 0;
static char FUN0(char data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 'a';
    }
    return data;
}
void FUN1()
{
    char data;
    data = ' ';
    VAR0 = 0; 
    data = FUN0(data);
    {
        char charArraySink[4];
        charArraySink[0] = 'x';
        charArraySink[1] = data;
        charArraySink[2] = 'z';
        charArraySink[3] = '\0';
        printLine(charArraySink);
    }
}
static char FUN2(char data)
{
    if(VAR1)
    {
        data = 'a';
    }
    return data;
}
void FUN3()
{
    char data;
    data = ' ';
    VAR1 = 1; 
    data = FUN2(data);
    {
        char charArraySink[4];
        charArraySink[0] = 'x';
        charArraySink[1] = data;
        charArraySink[2] = 'z';
        charArraySink[3] = '\0';
        printLine(charArraySink);
    }
}
