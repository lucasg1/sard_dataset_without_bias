void FUN0()
{
    char data;
    char *dataPtr1 = &data;
    char *dataPtr2 = &data;
    data = ' ';
    {
        char data = *dataPtr1;
        {
            char charArraySource[2];
            charArraySource[0] = (char)getc(stdin);
            charArraySource[1] = '\0';
            data = (char)atoi(charArraySource);
        }
        *dataPtr1 = data;
    }
    {
        char data = *dataPtr2;
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
}
