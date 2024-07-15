void FUN0()
{
    char data;
    char *dataPtr1 = &data;
    char *dataPtr2 = &data;
    data = ' ';
    {
        char data = *dataPtr1;
        data = 'a';
        *dataPtr1 = data;
    }
    {
        char data = *dataPtr2;
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
