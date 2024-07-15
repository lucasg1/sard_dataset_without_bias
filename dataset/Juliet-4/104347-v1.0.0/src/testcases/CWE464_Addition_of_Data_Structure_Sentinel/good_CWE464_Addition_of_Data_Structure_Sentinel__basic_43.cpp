namespace NAMESPACE0
{
void FUN0(char &data)
{
    data = 'a';
}
void FUN1()
{
    char data;
    data = ' ';
    FUN0(data);
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
