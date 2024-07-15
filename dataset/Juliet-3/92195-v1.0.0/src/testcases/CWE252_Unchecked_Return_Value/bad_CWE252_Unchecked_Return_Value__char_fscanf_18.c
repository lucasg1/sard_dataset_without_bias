void FUN0()
{
    goto sink;
sink:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
<START>
        fscanf(stdin, "%99s\0", data);
<END>
    }
}
