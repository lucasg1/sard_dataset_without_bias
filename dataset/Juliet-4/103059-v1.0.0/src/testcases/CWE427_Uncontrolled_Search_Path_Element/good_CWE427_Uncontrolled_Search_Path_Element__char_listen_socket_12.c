void FUN0()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
        strcat(data, NEW_PATH);
    }
    else
    {
        strcat(data, NEW_PATH);
    }
    PUTENV(data);
}
