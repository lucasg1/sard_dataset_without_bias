using namespace std; 
namespace NAMESPACE0
{
void FUN0()
{
    while(1)
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
        printLine("ok");
        break;
    }
}
} 
