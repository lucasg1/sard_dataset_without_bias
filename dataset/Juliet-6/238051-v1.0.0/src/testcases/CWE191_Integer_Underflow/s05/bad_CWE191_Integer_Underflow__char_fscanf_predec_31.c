void FUN0()
{
    char data;
    data = ' ';
    fscanf (stdin, "%c", &data);
    {
        char dataCopy = data;
        char data = dataCopy;
        {
<START>
            --data;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
