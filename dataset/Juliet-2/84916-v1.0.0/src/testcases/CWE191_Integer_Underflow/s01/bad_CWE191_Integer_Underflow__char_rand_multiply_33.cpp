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
        if(data < 0) 
        {
<START>
            char result = data * 2;
<END>
            printHexCharLine(result);
        }
    }
}
} 
