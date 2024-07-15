namespace NAMESPACE0
{
void FUN0(short &data)
{
    data = (short)RAND32();
}
void FUN1()
{
    short data;
    data = -1;
    FUN0(data);
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
} 
