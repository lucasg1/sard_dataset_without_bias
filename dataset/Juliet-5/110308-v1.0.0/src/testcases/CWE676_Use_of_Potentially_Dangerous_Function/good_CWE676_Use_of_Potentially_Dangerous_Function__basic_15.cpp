using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        char charBuffer[CHAR_BUFFER_SIZE];
        cin.width(CHAR_BUFFER_SIZE);
        cin >> charBuffer;
        charBuffer[CHAR_BUFFER_SIZE-1] = '\0';
        printLine(charBuffer);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        char charBuffer[CHAR_BUFFER_SIZE];
        cin.width(CHAR_BUFFER_SIZE);
        cin >> charBuffer;
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
