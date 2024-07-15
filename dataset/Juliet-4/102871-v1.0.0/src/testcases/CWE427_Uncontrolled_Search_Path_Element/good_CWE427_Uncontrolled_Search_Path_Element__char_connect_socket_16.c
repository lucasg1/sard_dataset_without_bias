void FUN0()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    while(1)
    {
        strcat(data, NEW_PATH);
        break;
    }
    PUTENV(data);
}
