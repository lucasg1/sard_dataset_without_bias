void FUN0()
{
    char data;
    data = ' ';
    goto source;
source:
    fscanf (stdin, "%c", &data);
    goto sink;
sink:
    {
<START>
        char result = data * data;
<END>
        printHexCharLine(result);
    }
}
