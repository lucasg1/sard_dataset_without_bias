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
            char * dataBuffer = new char;
            *dataBuffer = 'A';
            data = dataBuffer;
        }
    }
    printHexCharLine(*data);
    delete data;
}
} 
