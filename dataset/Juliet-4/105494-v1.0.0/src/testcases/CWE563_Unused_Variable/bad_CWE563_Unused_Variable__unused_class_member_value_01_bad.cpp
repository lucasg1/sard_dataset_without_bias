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
            id = 22;
        }
        void printMembers() 
        {
<START>
            id = 11; 
<END>
            printIntLine(id);
        }
    private:
        int id; 
};
void FUN0()
{
    BadClass VAR2;
    VAR2.printMembers();
}
} 
