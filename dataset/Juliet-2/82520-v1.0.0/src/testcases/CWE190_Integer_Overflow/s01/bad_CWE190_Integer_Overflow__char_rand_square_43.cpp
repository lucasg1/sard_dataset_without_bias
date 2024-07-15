namespace NAMESPACE0
{
void FUN0(char &data)
{
    data = (char)RAND32();
}
void FUN1()
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
