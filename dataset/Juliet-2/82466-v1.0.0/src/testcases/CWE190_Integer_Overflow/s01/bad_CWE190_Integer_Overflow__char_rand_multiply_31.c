void FUN0()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    {
        char dataCopy = data;
        char data = dataCopy;
        if(data > 0) 
        {
<START>
            char result = data * 2;
<END>
            printHexCharLine(result);
        }
    }
}
