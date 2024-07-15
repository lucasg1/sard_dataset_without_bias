using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
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
