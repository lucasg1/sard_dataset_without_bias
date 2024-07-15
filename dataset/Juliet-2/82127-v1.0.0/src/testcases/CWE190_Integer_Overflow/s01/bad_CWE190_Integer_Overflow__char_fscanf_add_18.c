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
        char result = data + 1;
<END>
        printHexCharLine(result);
    }
}
