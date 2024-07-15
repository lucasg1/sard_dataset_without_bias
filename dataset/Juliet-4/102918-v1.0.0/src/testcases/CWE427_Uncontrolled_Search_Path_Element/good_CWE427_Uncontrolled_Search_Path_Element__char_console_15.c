void FUN0()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        strcat(data, NEW_PATH);
        break;
    }
    PUTENV(data);
}
void FUN1()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    switch(6)
    {
    case 6:
        strcat(data, NEW_PATH);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    PUTENV(data);
}
