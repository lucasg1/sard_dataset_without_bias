namespace NAMESPACE0
{
void FUN0()
{
    char data;
    char &dataRef = data;
    ; 
    {
        char data = dataRef;
        data = 'C';
        printHexCharLine(data);
    }
}
} 
