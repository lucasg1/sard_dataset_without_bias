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
            char result = data * data;
<END>
            printHexCharLine(result);
        }
    }
}
