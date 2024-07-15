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
            char buffer[sizeof(wchar_t)];
            wchar_t * dataBuffer = new(buffer) wchar_t;
            *dataBuffer = L'A';
            data = dataBuffer;
        }
    }
    printWcharLine(*data);
<START>
    delete data;
<END>
}
} 
