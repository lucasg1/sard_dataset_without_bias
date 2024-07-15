void FUN0()
{
    if(globalReturnsTrue())
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
