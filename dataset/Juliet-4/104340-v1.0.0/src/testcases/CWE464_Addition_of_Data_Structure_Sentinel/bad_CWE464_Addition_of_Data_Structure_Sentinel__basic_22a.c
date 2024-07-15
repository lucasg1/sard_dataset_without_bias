extern int VAR0;
char FUN0(char data)
{
    if(VAR0)
    {
        {
            char charArraySource[2];
            charArraySource[0] = (char)getc(stdin);
            charArraySource[1] = '\0';
            data = (char)atoi(charArraySource);
        }
    }
    return data;
}
int VAR0 = 0;
char FUN0(char data);
void FUN2()
{
    char data;
    data = ' ';
    VAR0 = 1; 
    data = FUN0(data);
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
