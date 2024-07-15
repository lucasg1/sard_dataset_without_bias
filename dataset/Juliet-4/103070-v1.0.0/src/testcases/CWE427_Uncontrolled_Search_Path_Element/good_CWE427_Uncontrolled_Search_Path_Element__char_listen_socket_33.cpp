namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    strcat(data, NEW_PATH);
    {
        char * data = dataRef;
        PUTENV(data);
    }
}
} 
