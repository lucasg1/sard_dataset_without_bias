void FUN0()
{
    if(1)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
<START>
            sscanf(SRC, "%99s\0", data);
<END>
        }
    }
}
