namespace NAMESPACE0
{
void FUN0(char * &data)
{
    strcat(data, NEW_PATH);
}
void FUN1()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    FUN0(data);
    PUTENV(data);
}
} 
