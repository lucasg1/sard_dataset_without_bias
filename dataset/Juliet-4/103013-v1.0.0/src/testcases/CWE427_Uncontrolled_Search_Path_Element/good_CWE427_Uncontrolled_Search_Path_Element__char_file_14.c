void FUN0()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        strcat(data, NEW_PATH);
    }
    PUTENV(data);
}
void FUN1()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    if(globalFive==5)
    {
        strcat(data, NEW_PATH);
    }
    PUTENV(data);
}
