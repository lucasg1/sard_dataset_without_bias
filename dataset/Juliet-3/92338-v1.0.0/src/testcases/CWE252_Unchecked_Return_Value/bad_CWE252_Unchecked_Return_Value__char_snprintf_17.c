void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
<START>
            SNPRINTF(data,100-strlen(SRC)-1, "%s\n", SRC);
<END>
        }
    }
}
