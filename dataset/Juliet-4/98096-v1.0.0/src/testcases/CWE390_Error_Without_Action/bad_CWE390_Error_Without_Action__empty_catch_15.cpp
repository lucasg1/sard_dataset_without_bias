using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    switch(6)
    {
    case 6:
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
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
