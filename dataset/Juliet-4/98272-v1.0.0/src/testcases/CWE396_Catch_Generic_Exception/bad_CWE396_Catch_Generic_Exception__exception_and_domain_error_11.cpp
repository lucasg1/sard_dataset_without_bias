using namespace std; 
namespace NAMESPACE0
{
void FUN0()
{
    if(globalReturnsTrue())
    {
        try
        {
            if (rand()%2 == 0)
            {
                throw out_of_range("err1");
            }
            if (rand()%2 == 0)
            {
                throw domain_error("err2");
            }
        }
<START>
        catch (exception &)
<END>
        {
            printLine("exception");
        }
        catch (domain_error &)
        {
            printLine("domain_error");
            return;
        }
        printLine("ok");
    }
}
} 
