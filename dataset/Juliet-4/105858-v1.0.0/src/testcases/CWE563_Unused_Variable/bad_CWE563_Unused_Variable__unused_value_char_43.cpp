namespace NAMESPACE0
{
void FUN0(char &data)
{
    data = 'C';
}
void FUN1()
{
    char data;
    FUN0(data);
<START>
    data = 'Z';
<END>
    printHexCharLine(data);
}
} 
