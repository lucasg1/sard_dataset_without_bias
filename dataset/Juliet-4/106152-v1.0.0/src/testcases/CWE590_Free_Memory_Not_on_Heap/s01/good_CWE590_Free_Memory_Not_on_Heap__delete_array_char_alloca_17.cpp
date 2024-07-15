namespace NAMESPACE0
{
void FUN0()
{
    int h;
    char * data;
    data = NULL; 
    for(h = 0; h < 1; h++)
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
