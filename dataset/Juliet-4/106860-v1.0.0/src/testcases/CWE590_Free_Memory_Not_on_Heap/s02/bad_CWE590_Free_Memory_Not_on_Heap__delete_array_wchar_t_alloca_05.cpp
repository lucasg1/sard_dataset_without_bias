static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL; 
    if(staticTrue)
    {
        {
            wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
            wmemset(dataBuffer, L'A', 100-1); 
            dataBuffer[100-1] = L'\0'; 
            data = dataBuffer;
        }
    }
    printWLine(data);
<START>
    delete [] data;
<END>
}
} 
