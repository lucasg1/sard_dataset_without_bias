void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            if (sscanf(SRC_STRING, "%99s\0", data) == EOF)
            {
                printLine("sscanf failed!");
            }
        }
    }
}
