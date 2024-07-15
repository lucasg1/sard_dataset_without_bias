namespace NAMESPACE0
{
void FUN0(short &data)
{
    data = (short)RAND32();
}
} 
namespace NAMESPACE0
{
void FUN0(short &data);
void FUN2()
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
