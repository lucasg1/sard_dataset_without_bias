using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    goto sink;
sink:
    {
        try
        {
            string stringHello = "hello";
            string stringSubstring = stringHello.substr(rand(), rand());
            printLine(stringSubstring.c_str());
        }
        catch (out_of_range &)
        {
<START>
        }
<END>
    }
}
} 
