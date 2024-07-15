using namespace std;
static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
namespace NAMESPACE0
{
void FUN2()
{
    if(FUN0())
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
