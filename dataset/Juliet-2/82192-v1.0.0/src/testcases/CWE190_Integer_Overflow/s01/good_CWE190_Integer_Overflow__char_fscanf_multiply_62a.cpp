namespace NAMESPACE0
{
void FUN0(char &data)
{
    data = 2;
}
void FUN1(char &data)
{
    fscanf (stdin, "%c", &data);
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
    if(data > 0) 
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
    if(data > 0) 
    {
        if (data < (CHAR_MAX/2))
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
} 
