void FUN0()
{
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
        if (fscanf(stdin, "%99s\0", data) == EOF)
        {
            printLine("fscanf failed!");
        }
    }
}
