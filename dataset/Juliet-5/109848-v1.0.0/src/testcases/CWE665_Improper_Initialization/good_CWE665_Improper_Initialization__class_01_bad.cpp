using namespace std;
namespace NAMESPACE0
{
class GoodClass {
    public:
        GoodClass()
        {
            initialize();
        }
        void initialize()
        {
            initialized = false; 
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
    GoodClass VAR1 = GoodClass();
    cout << "Initialized? ";
    if (VAR1.isInitialized())
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
using namespace std;
namespace NAMESPACE0
{
} 
