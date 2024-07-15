namespace NAMESPACE0 
{
class GoodClass 
{
    public:
        GoodClass() : intOne(0) 
        {
        }
        int intOne;
};
void FUN0()
{
    GoodClass * VAR1 = new GoodClass;
    printIntLine(VAR1->intOne);
}
} 
namespace NAMESPACE0
{
} 
