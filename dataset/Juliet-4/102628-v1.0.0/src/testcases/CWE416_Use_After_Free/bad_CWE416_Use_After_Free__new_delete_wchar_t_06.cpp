static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        printWcharLine(*data);
<END>
    }
}
} 
