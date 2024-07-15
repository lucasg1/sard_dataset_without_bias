void FUN0()
{
    char data;
    data = ' ';
    goto source;
source:
    data = CHAR_MAX;
    goto sink;
sink:
    if(data > 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}
