void FUN0()
{
    if(5==5)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
<START>
            scanf("%99s\0", data);
<END>
        }
    }
}
