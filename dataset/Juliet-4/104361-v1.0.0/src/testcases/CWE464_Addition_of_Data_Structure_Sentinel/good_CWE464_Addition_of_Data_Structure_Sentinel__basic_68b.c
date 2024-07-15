char VAR0;
char VAR1;
void FUN0();
void FUN1()
{
    char data;
    data = ' ';
    data = 'a';
    VAR1 = data;
    FUN0();
}
extern char VAR0;
extern char VAR1;
void FUN0()
{
    char data = VAR1;
    {
        char charArraySink[4];
        charArraySink[0] = 'x';
        charArraySink[1] = data;
        charArraySink[2] = 'z';
        charArraySink[3] = '\0';
        printLine(charArraySink);
    }
}
