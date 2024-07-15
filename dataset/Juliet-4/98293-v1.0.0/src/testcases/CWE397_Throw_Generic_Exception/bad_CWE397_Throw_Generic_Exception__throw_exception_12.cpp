using namespace std; 
namespace NAMESPACE0
{
void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        throw exception();
<END>
    }
    else
    {
        throw range_error("Test");
    }
}
} 
