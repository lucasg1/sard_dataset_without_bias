namespace NAMESPACE0
{
void FUN0()
{
    char data;
    char &dataRef = data;
    data = 'C';
    printHexCharLine(data);
    {
        char data = dataRef;
        data = 'Z';
        printHexCharLine(data);
    }
}
void FUN1()
{
    char data;
    char &dataRef = data;
    data = 'C';
    {
        char data = dataRef;
        printHexCharLine(data);
    }
}
} 
