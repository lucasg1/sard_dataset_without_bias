char FUN0(char data)
{
    data = 'a';
    return data;
}
char FUN0(char data);
void FUN2()
{
    char data;
    data = ' ';
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
