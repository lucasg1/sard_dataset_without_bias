void FUN0()
{
    char data;
    data = ' ';
    fscanf (stdin, "%c", &data);
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
