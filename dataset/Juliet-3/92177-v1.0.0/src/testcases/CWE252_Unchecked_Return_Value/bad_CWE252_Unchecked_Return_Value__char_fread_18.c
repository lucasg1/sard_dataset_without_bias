void FUN0()
{
    goto sink;
sink:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
<START>
        fread((char *)data, sizeof(char), (size_t)(100-1), stdin);
<END>
    }
}
