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
    if(data > 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}
} 
