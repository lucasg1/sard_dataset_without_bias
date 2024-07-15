namespace NAMESPACE0
{
void FUN0()
{
    char data;
    char &dataRef = data;
    data = ' ';
    data = CHAR_MIN;
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
