namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * dataBuffer = new char[100];
            memset(dataBuffer, 'A', 100-1); 
            dataBuffer[100-1] = '\0'; 
            data = dataBuffer;
        }
    }
    printLine(data);
    delete [] data;
}
void FUN1()
{
    char * data;
    data = NULL; 
    if(GLOBAL_CONST_TRUE)
    {
        {
            char * dataBuffer = new char[100];
            memset(dataBuffer, 'A', 100-1); 
            dataBuffer[100-1] = '\0'; 
            data = dataBuffer;
        }
    }
    printLine(data);
    delete [] data;
}
} 
