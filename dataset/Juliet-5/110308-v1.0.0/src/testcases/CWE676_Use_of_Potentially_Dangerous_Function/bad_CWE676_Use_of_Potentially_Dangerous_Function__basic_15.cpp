using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char charBuffer[CHAR_BUFFER_SIZE];
<START>
        cin >> charBuffer;
<END>
        charBuffer[CHAR_BUFFER_SIZE-1] = '\0';
        printLine(charBuffer);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
