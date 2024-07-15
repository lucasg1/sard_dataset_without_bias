namespace NAMESPACE0
{
class GoodClass
{
    public:
        GoodClass()
        {
            id = 22;
        }
        void printMembers() 
        {
            printIntLine(id);
        }
    private:
        int id; 
};
void FUN0()
{
    GoodClass VAR1;
    VAR1.printMembers();
}
} 
namespace NAMESPACE0
{
} 
