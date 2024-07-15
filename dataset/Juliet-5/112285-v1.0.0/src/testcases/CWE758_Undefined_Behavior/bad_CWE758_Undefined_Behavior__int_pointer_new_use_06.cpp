static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            int * * pointer = new int *;
<START>
            int * data = *pointer; 
<END>
            delete pointer;
            printIntLine(*data);
        }
    }
}
} 
