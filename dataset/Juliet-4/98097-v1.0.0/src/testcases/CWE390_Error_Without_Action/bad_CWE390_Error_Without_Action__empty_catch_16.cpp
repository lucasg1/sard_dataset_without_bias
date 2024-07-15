using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    while(1)
    {
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
        break;
    }
}
} 
