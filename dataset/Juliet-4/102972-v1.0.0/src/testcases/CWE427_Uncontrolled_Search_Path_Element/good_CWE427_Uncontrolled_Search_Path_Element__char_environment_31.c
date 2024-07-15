void FUN0()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    strcat(data, NEW_PATH);
    {
        char * dataCopy = data;
        char * data = dataCopy;
        PUTENV(data);
    }
}
