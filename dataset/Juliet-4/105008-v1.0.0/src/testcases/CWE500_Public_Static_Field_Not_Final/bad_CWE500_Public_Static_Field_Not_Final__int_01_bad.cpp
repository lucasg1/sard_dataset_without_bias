using namespace std;
namespace NAMESPACE0
{
} 
using namespace std;
namespace NAMESPACE0
{
class BadClass 
{
    public:
<START>
        static int ONE_HUNDRED;
<END>
};
int BadClass::ONE_HUNDRED = 100;
void FUN0()
{
    printIntLine(BadClass::ONE_HUNDRED);
}
} 
