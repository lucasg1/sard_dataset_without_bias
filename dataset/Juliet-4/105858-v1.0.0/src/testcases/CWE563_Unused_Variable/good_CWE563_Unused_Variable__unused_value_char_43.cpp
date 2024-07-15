namespace NAMESPACE0
{
void FUN0(char &data)
{
    data = 'C';
    printHexCharLine(data);
}
void FUN1()
{
    char data;
    FUN0(data);
    data = 'Z';
    printHexCharLine(data);
}
void FUN2(char &data)
{
    data = 'C';
}
void FUN3()
{
    char data;
    FUN2(data);
    printHexCharLine(data);
}
} 
