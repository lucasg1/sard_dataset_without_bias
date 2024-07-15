void FUN0()
{
    while(1)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            if (fread((char *)data, sizeof(char), (size_t)(100-1), stdin) != 100-1)
            {
                printLine("fread failed!");
            }
        }
        break;
    }
}
