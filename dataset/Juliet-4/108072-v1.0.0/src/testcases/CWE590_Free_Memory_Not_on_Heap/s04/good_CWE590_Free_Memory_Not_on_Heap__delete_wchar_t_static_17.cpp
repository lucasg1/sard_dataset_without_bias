namespace NAMESPACE0
{
void FUN0()
{
    int h;
    wchar_t * data;
    data = NULL; 
    for(h = 0; h < 1; h++)
    {
        {
            wchar_t * dataBuffer = new wchar_t;
            *dataBuffer = L'A';
            data = dataBuffer;
        }
    }
    printWcharLine(*data);
    delete data;
}
} 
