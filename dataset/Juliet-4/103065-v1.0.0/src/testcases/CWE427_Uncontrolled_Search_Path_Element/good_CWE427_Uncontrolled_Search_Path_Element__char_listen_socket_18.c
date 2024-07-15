void FUN0()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    goto source;
source:
    strcat(data, NEW_PATH);
    PUTENV(data);
}
