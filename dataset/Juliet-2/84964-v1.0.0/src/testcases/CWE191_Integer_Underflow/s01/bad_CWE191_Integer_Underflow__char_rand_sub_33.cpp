namespace NAMESPACE0
{
void FUN0()
{
    char data;
    char &dataRef = data;
    data = ' ';
    data = (char)RAND32();
    {
        char data = dataRef;
        {
<START>
            char result = data - 1;
<END>
            printHexCharLine(result);
        }
    }
}
} 
