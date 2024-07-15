using namespace std; 
static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    if(staticFive==5)
    {
<START>
        throw exception();
<END>
    }
}
} 
