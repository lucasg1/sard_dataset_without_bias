namespace NAMESPACE0 
{
} 
namespace NAMESPACE0
{
class BadClass 
{
    public:
        BadClass() 
        { 
        } 
        int intOne;
};
void FUN0()
{
    BadClass * VAR2 = new BadClass;
<START>
    printIntLine(VAR2->intOne);
<END>
}
} 
