void FUN0(char * * data);
void FUN1()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    strcat(data, NEW_PATH);
    FUN0(&data);
}
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    PUTENV(data);
}
