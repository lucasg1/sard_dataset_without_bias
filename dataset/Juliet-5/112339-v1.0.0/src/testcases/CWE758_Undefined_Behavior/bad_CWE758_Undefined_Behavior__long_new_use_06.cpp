static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            long * pointer = new long;
<START>
            long data = *pointer; 
<END>
            delete pointer;
            printLongLine(data);
        }
    }
}
} 
