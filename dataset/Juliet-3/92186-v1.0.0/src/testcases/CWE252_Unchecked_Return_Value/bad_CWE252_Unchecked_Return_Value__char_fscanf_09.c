void FUN0()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
<START>
            fscanf(stdin, "%99s\0", data);
<END>
        }
    }
}
