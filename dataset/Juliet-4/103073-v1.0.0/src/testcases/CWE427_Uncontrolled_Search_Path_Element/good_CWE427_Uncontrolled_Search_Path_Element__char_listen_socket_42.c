static char * FUN0(char * data)
{
    strcat(data, NEW_PATH);
    return data;
}
void FUN1()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    data = FUN0(data);
    PUTENV(data);
}
