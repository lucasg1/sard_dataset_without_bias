using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
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
                printLine("Range specified was invalid");
                exit(1);
            }
        }
    }
}
void FUN1()
{
    if(globalReturnsTrue())
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
                printLine("Range specified was invalid");
                exit(1);
            }
        }
    }
}
} 
