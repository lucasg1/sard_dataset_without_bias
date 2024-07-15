using namespace std; 
static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    if(staticTrue)
    {
<START>
        throw exception();
<END>
    }
}
} 
