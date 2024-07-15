namespace NAMESPACE0
{
void FUN0(char &data)
{
    data = -2;
}
void FUN1(char &data)
{
    data = CHAR_MIN;
}
} 
namespace NAMESPACE0
{
void FUN0(char &data);
void FUN3()
{
    char data;
    data = ' ';
    FUN0(data);
    {
        char result = data - 1;
        printHexCharLine(result);
    }
}
void FUN1(char &data);
void FUN5()
{
    char data;
    data = ' ';
    FUN1(data);
    if (data > CHAR_MIN)
    {
        char result = data - 1;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
} 
