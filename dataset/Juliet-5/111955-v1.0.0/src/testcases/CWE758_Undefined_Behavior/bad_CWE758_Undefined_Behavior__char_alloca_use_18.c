void FUN0()
{
    goto sink;
sink:
    {
        char * pointer = (char *)ALLOCA(sizeof(char));
<START>
        char data = *pointer; 
<END>
        printHexCharLine(data);
    }
}
