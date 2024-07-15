static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR1;
    PUTENV(data);
}
void FUN1()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    strcat(data, NEW_PATH);
    VAR1 = data;
    FUN0();
}
