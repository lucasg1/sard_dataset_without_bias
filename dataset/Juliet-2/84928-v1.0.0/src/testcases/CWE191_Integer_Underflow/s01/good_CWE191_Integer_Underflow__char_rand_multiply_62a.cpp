namespace NAMESPACE0
{
void FUN0(char &data)
{
    data = -2;
}
void FUN1(char &data)
{
    data = (char)RAND32();
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
    if(data < 0) 
    {
        char result = data * 2;
        printHexCharLine(result);
    }
}
void FUN1(char &data);
void FUN5()
{
    char data;
    data = ' ';
    FUN1(data);
    if(data < 0) 
    {
        if (data > (CHAR_MIN/2))
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
} 
