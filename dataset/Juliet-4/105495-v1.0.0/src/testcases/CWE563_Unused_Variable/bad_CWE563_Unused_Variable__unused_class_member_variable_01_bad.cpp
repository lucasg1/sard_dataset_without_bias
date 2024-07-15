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
            printLine("BadClass contructor");
        }
        void printMembers() 
        {
            printIntLine(5);
        }
    private:
<START>
        int id; 
<END>
};
void FUN0()
{
    BadClass VAR2;
    VAR2.printMembers();
}
} 
