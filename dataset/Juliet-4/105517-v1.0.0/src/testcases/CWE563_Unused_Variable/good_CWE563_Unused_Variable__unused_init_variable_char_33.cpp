namespace NAMESPACE0
{
void FUN0()
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
