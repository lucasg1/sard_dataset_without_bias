void FUN0()
{
    int h;
    char data;
    data = ' ';
    for(h = 0; h < 1; h++)
    {
        data = 'a';
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
