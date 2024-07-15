void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    {
        wchar_t * data = *dataPtr1;
        {
            size_t dataLen = wcslen(data);
            wchar_t * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                wcsncat(data+dataLen, environment, 100-dataLen-1);
            }
        }
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
<START>
        EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
<END>
    }
}
