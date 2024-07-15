namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    goto source;
source:
    {
        char * dataBuffer = new char;
        *dataBuffer = 'A';
        data = dataBuffer;
    }
    printHexCharLine(*data);
    delete data;
}
} 
