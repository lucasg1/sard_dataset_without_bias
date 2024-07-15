void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    switch(6)
    {
    case 6:
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        printf(data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
