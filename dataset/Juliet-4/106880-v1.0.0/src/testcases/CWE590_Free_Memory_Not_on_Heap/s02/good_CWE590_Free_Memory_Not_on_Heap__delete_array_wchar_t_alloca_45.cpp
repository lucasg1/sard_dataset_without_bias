namespace NAMESPACE0
{
static wchar_t * VAR1;
static wchar_t * VAR2;
void FUN0()
{
    wchar_t * data = VAR2;
    printWLine(data);
    delete [] data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    {
        wchar_t * dataBuffer = new wchar_t[100];
        wmemset(dataBuffer, L'A', 100-1); 
        dataBuffer[100-1] = L'\0'; 
        data = dataBuffer;
    }
    VAR2 = data;
    FUN0();
}
} 
