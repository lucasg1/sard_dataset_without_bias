void FUN0()
{
    goto sink;
sink:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
<START>
        scanf("%99s\0", data);
<END>
    }
}
