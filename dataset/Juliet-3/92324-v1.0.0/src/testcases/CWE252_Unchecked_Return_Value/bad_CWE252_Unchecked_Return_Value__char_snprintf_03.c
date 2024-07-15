void FUN0()
{
    if(5==5)
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
