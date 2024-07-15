namespace NAMESPACE0
{
void FUN0(char &data)
{
    data = CHAR_MIN;
}
} 
namespace NAMESPACE0
{
void FUN0(char &data);
void FUN2()
{
    char data;
    data = ' ';
    FUN0(data);
    {
<START>
        char result = data - 1;
<END>
        printHexCharLine(result);
    }
}
} 
