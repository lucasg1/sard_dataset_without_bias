static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            char * pointer = new char;
<START>
            char data = *pointer; 
<END>
            delete pointer;
            printHexCharLine(data);
        }
    }
}
} 
