namespace NAMESPACE0
{
void FUN0(short &data)
{
    data = CHAR_MAX-5;
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
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
} 
