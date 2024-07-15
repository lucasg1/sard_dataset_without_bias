void FUN0()
{
    if(1)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
<START>
            if (fscanf(stdin, "%99s\0", data) == 0)
<END>
            {
                printLine("fscanf failed!");
            }
        }
    }
}
