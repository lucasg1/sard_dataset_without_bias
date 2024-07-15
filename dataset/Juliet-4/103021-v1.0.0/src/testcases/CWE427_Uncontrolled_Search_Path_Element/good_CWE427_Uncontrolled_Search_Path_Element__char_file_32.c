void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    {
        char * data = *dataPtr1;
        strcat(data, NEW_PATH);
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        PUTENV(data);
    }
}
