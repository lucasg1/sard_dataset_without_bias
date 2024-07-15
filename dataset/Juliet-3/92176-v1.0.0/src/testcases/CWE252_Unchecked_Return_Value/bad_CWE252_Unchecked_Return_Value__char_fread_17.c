void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
<START>
            fread((char *)data, sizeof(char), (size_t)(100-1), stdin);
<END>
        }
    }
}
