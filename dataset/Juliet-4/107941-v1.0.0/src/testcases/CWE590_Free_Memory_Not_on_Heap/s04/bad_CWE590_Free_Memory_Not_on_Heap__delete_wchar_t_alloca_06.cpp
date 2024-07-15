static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL; 
    if(STATIC_CONST_FIVE==5)
    {
        {
            wchar_t * dataBuffer = (wchar_t *)ALLOCA(sizeof(wchar_t));
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
