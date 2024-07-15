namespace NAMESPACE0
{
void FUN0(char &data)
{
    data = CHAR_MAX;
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
        char result = data * data;
<END>
        printHexCharLine(result);
    }
}
} 
