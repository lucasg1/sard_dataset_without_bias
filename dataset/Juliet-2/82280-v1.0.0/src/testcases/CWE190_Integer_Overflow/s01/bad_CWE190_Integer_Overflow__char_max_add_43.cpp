namespace NAMESPACE0
{
void FUN0(char &data)
{
    data = CHAR_MAX;
}
void FUN1()
{
    char data;
    data = ' ';
    FUN0(data);
    {
<START>
        char result = data + 1;
<END>
        printHexCharLine(result);
    }
}
} 
