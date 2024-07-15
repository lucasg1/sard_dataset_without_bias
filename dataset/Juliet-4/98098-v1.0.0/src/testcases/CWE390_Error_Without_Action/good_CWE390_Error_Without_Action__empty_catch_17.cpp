using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
