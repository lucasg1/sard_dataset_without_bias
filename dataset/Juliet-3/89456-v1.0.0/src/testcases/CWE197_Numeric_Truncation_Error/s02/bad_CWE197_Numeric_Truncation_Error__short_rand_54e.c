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
    data = (short)RAND32();
    FUN1(data);
}
void FUN4(short data);
void FUN5(short data)
{
    FUN4(data);
}
void FUN5(short data);
void FUN0(short data)
{
    FUN5(data);
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
