static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    if(STATIC_CONST_FIVE==5)
    {
        {
            char * dataBuffer = (char *)ALLOCA(sizeof(char));
            *dataBuffer = 'A';
            data = dataBuffer;
        }
    }
    printHexCharLine(*data);
<START>
    delete data;
<END>
}
} 
