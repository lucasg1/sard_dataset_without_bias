void FUN0()
{
    char data;
    data = ' ';
    while(1)
    {
        data = 'a';
        break;
    }
    {
        char charArraySink[4];
        charArraySink[0] = 'x';
        charArraySink[1] = data;
        charArraySink[2] = 'z';
        charArraySink[3] = '\0';
        printLine(charArraySink);
    }
}
