namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        char * dataBuffer = new char[100];
        memset(dataBuffer, 'A', 100-1); 
        dataBuffer[100-1] = '\0'; 
        data = dataBuffer;
    }
    break;
    }
    printLine(data);
    delete [] data;
}
void FUN1()
{
    char * data;
    data = NULL; 
    switch(6)
    {
    case 6:
    {
        char * dataBuffer = new char[100];
        memset(dataBuffer, 'A', 100-1); 
        dataBuffer[100-1] = '\0'; 
        data = dataBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printLine(data);
    delete [] data;
}
} 
