using namespace std;
static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
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
