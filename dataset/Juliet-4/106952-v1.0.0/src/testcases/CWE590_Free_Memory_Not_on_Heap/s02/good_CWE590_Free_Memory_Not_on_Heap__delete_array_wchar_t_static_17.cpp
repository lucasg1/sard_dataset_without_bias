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
            wchar_t * dataBuffer = new wchar_t[100];
            wmemset(dataBuffer, L'A', 100-1); 
            dataBuffer[100-1] = L'\0'; 
            data = dataBuffer;
        }
    }
    printWLine(data);
    delete [] data;
}
} 
