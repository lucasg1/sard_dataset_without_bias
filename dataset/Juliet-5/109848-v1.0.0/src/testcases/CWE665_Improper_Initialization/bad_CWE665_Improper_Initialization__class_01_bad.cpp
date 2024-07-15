using namespace std;
namespace NAMESPACE0
{
} 
using namespace std;
namespace NAMESPACE0
{
class BadClass {
    public:
        BadClass()
        {
            initialize();
        }
        void initialize()
        {
<START>
            initialized = true; 
<END>
            if (!initialized)
            {
                printLine("Initializing...");
                initialized = true;
            }
        }
        bool isInitialized()
        {
            return initialized;
        }
    private:        
        bool initialized;
};
void FUN0()
{
    BadClass VAR2 = BadClass();
    cout << "Initialized? ";
    if (VAR2.isInitialized())
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    cout << endl;
}
} 
