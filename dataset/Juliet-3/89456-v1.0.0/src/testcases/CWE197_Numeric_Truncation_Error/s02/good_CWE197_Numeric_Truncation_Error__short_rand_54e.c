void FUN0(short data);
void FUN1(short data)
{
    FUN0(data);
}
void FUN1(short data);
void FUN3()
{
    short data;
    data = -1;
    data = CHAR_MAX-5;
    FUN1(data);
}
void FUN5(short data);
void FUN6(short data)
{
    FUN5(data);
}
void FUN6(short data);
void FUN0(short data)
{
    FUN6(data);
}
void FUN5(short data)
{
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
