void FUN0()
{
    char data;
    data = ' ';
    data = 'a';
    {
        char dataCopy = data;
        char data = dataCopy;
        {
            char charArraySink[4];
            charArraySink[0] = 'x';
            charArraySink[1] = data;
            charArraySink[2] = 'z';
            charArraySink[3] = '\0';
            printLine(charArraySink);
        }
    }
}
