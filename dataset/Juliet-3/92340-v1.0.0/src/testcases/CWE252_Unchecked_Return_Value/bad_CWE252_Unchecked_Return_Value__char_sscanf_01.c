void FUN0()
{
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
<START>
        sscanf(SRC, "%99s\0", data);
<END>
    }
}
