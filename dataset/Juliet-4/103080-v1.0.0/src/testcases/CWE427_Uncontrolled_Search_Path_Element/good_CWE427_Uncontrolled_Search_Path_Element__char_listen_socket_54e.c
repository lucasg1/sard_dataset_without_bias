void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN3()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    strcat(data, NEW_PATH);
    FUN2(data);
}
void FUN1(char * data);
void FUN2(char * data)
{
    FUN1(data);
}
void FUN7(char * data);
void FUN0(char * data)
{
    FUN7(data);
}
void FUN7(char * data)
{
    PUTENV(data);
}
