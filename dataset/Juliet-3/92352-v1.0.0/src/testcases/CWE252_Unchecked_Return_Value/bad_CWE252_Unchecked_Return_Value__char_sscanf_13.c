void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
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
