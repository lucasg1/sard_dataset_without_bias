namespace NAMESPACE0
{
void FUN0(char &data)
{
    data = 2;
}
void FUN1(char &data)
{
    data = CHAR_MAX;
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
        char result = data * data;
        printHexCharLine(result);
    }
}
void FUN1(char &data);
void FUN5()
{
    char data;
    data = ' ';
    FUN1(data);
    if (abs((long)data) <= (long)sqrt((double)CHAR_MAX))
    {
        char result = data * data;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
} 
