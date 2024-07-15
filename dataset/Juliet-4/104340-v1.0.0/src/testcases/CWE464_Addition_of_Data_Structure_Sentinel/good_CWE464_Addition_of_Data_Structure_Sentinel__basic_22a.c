extern int VAR0;
extern int VAR1;
char FUN0(char data)
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
char FUN1(char data)
{
    if(VAR1)
    {
        data = 'a';
    }
    return data;
}
int VAR0 = 0;
int VAR1 = 0;
char FUN0(char data);
void FUN3()
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
char FUN1(char data);
void FUN5()
{
    char data;
    data = ' ';
    VAR1 = 1; 
    data = FUN1(data);
    {
        char charArraySink[4];
        charArraySink[0] = 'x';
        charArraySink[1] = data;
        charArraySink[2] = 'z';
        charArraySink[3] = '\0';
        printLine(charArraySink);
    }
}
