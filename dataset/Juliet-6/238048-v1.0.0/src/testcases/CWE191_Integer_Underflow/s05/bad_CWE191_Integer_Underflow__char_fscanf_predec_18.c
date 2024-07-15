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
        --data;
<END>
        char result = data;
        printHexCharLine(result);
    }
}
