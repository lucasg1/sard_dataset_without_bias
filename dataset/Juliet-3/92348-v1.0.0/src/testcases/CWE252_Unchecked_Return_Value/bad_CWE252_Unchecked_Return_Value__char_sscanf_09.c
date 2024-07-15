void FUN0()
{
    if(GLOBAL_CONST_TRUE)
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
