void FUN0(short data);
void FUN1()
{
    short data;
    data = -1;
    fscanf (stdin, "%hd", &data);
    FUN0(data);
}
void FUN2(short data);
void FUN0(short data)
{
    FUN2(data);
}
void FUN4(short data);
void FUN2(short data)
{
    FUN4(data);
}
void FUN4(short data)
{
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
