using namespace std;
static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    if(staticFive==5)
    {
        {
            char charBuffer[CHAR_BUFFER_SIZE];
<START>
            cin >> charBuffer;
<END>
            charBuffer[CHAR_BUFFER_SIZE-1] = '\0';
            printLine(charBuffer);
        }
    }
}
} 
