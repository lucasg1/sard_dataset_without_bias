static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    if(staticFive==5)
    {
        {
            char buffer[sizeof(char)];
            char * dataBuffer = new(buffer) char;
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
