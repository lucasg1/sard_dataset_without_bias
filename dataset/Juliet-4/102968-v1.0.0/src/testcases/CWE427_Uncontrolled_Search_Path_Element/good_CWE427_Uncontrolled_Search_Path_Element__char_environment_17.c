void FUN0()
{
    int h;
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    for(h = 0; h < 1; h++)
    {
        strcat(data, NEW_PATH);
    }
    PUTENV(data);
}
