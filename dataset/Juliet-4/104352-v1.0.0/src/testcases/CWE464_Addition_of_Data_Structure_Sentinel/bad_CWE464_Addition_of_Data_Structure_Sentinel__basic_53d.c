void FUN0(char data);
void FUN1()
{
    char data;
    data = ' ';
    {
        char charArraySource[2];
        charArraySource[0] = (char)getc(stdin);
        charArraySource[1] = '\0';
        data = (char)atoi(charArraySource);
    }
    FUN0(data);
}
void FUN2(char data);
void FUN0(char data)
{
    FUN2(data);
}
void FUN4(char data);
void FUN2(char data)
{
    FUN4(data);
}
void FUN4(char data)
{
    {
        char charArraySink[4];
        charArraySink[0] = 'x';
<START>
        charArraySink[1] = data;
<END>
        charArraySink[2] = 'z';
        charArraySink[3] = '\0';
        printLine(charArraySink);
    }
}
