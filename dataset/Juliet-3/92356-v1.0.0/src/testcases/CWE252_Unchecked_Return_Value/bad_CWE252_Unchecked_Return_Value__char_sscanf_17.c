void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
