void FUN0()
{
    char data;
    data = ' ';
    if(globalReturnsTrueOrFalse())
    {
        {
            char charArraySource[2];
            charArraySource[0] = (char)getc(stdin);
            charArraySource[1] = '\0';
            data = (char)atoi(charArraySource);
        }
    }
    else
    {
        data = 'a';
    }
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
