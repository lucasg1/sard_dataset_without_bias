using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    goto sink;
sink:
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
